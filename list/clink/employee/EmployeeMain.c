#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Employee.h"
#include "../CLinkedList.h"


void PrintGuardDuty(List *plist)
{
    Emp * pemp = (Emp *)malloc(sizeof(Emp));
    int cnt = 1;
    if(LFirst(plist, &pemp))
    {
        printf("[%02d 근무] %s\n", cnt, pemp->name);
        cnt++;

        for (int i = 0; i < plist->numOfData - 1; i++)
        {
            LNext(plist, &pemp);

            printf("[%02d 근무] %s\n", cnt, pemp->name);
            cnt++;
        }
    }

}

// 이름을 전달 받아 해당 직원 구조체를 전달한다
// 성공 1 실패 0
int GetEmpStruct(List * plist, char * name, Emp ** ppemp)
{
    Emp ** tEmp = (Emp **) malloc(sizeof(Emp *));

    if(LFirst(plist, tEmp))
    {
        if((*tEmp)->name == name)
        {
            *ppemp = *tEmp;
            return TRUE;
        }

        for (int i = 0; i < plist->numOfData - 1; i++)
        {
            if((*tEmp)->name == name)
            {
                *ppemp = *tEmp;
                return TRUE;
            }
        }
    }
    return FALSE;
}

void SearchNextDuty(List * plist, char * name, int day)
{
    Emp * pemp = (Emp *)malloc(sizeof(Emp));

    /*if(LFirst(plist, &pemp))
    {
        if(strcmp(pemp->name, name) == 0)
        {
            for (int i = 0; i < day-1; i++)
            {
                LNext(plist, &pemp);
            }
            printf("11%s 근무 %d일 후 근무자는 %s입니다\n", name, day, pemp->name);
        }

        for (int i = 0; i < plist->numOfData - 1; i++)
        {
            LNext(plist, &pemp);
            if(strcmp(pemp->name, name) == 0)
            {
                for (int j = 1; j <= day; j++)
                {
                    LNext(plist, &pemp);
                    printf("[%s]\n", pemp->name);
                }
                printf("%s 근무 %d일 후 근무자는 %s입니다\n", name, day, pemp->name);
                return;
            }

        }
    }*/

    LFirst(plist, &pemp);
    int j = 0;

    // 첫번째가 찾는 이름이면 바로 스킵
    if(strcmp(pemp->name, name) != 0)
    {
        for (int i = 0; i < plist->numOfData - 1; i++)
        {
            LNext(plist, &pemp);
            if(strcmp(pemp->name, name) == 0)
                break;
            j++;
        }
        // 해당하는 사람이 없으면
        if(j >= plist->numOfData-1)
            return;
    }

    // 며칠 뒤
    for (int i = 0; i < day; i++)
    {
        LNext(plist, &pemp);
    }
    printf("%s 근무 %d일 후 근무자는 %s입니다\n", name, day, pemp->name);
}


int main(void)
{
    List list;
    ListInit(&list);

    LInsert(&list, MakeEmployee(1001, "aaaa"));
    LInsert(&list, MakeEmployee(1001, "bbbb"));
    LInsert(&list, MakeEmployee(1001, "cccc"));
    LInsert(&list, MakeEmployee(1001, "dddd"));
    LInsert(&list, MakeEmployee(1001, "ffff"));
    LInsert(&list, MakeEmployee(1001, "e"));
    LInsert(&list, MakeEmployee(1001, "g"));
    LInsert(&list, MakeEmployee(1001, "hhhh"));
    LInsert(&list, MakeEmployee(1001, "iiii"));
    LInsert(&list, MakeEmployee(1001, "jjjj"));
    LInsert(&list, MakeEmployee(1001, "kkkk"));

    PrintGuardDuty(&list);


    SearchNextDuty(&list, "e", 8);


    return 0;
}