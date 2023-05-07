#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "NameCard.h"
#include "../array/ArrayList.h"

int main(void)
{
    /*
    NameCard *card = MakeNameCard("test", "000000000");

    printf("%p \n", card);

    printf("%s \n", card->name);
    printf("%s \n", card->phone);

    int a = 10;
    int * num = &a;

    int * pnum = (int*)malloc(sizeof(int));
    *pnum = 10;


    printf("num: %p \n", num);
    printf("*num: %d \n", *num);

    printf("pnum: %p \n", pnum);
    printf("*pnum: %d \n", *pnum);*/

    List * list = (List*) malloc(sizeof(List));
    NameCard * pcard;

    ListInit(list);

    // 리스트에 정보 저장
    LInsert(list, MakeNameCard("테스터1", "010-1234-5678"));
    LInsert(list, MakeNameCard("테스터2", "010-4321-8765"));
    LInsert(list, MakeNameCard("테스터3", "010-8765-4321"));
    LInsert(list, MakeNameCard("테스터4", "010-4546-9864"));
    LInsert(list, MakeNameCard("테스터5", "010-5683-6867"));
    LInsert(list, MakeNameCard("테스터6", "010-3457-2234"));


    // 특정 이름 대상으로 탐색 후 정보 출력
    char * sname = "테스터2";

    if(LFirst(list, &pcard))
    {
        int bool = 0;
        if(strcmp(pcard->name, sname) == 0)
        {
            ShowNameCardInfo(pcard);
        }

        while(LNext(list, &pcard))
        {
            if(strcmp(pcard->name, sname) == 0)
            {
                ShowNameCardInfo(pcard);
                bool++;
            }
        }
        if(bool == 0)
            printf("일치하는 항목이 없습니다.\n");
    }

    // 특정 이름을 대상으로 탐색을 진행하여, 전화번호 정보 변경
    sname = "테스터2";

    if(LFirst(list, &pcard))
    {
        int bool = 0;
        if(strcmp(pcard->name, sname) == 0)
        {
            ChangePhoneNum(pcard, "123-4567-8910");
        }

        while(LNext(list, &pcard))
        {
            if(strcmp(pcard->name, sname) == 0)
            {
                ChangePhoneNum(pcard, "변경됨");
                bool++;
            }
        }
        if(bool == 0)
            printf("일치하는 항목이 없습니다.\n");
    }

    // 특정 대상 탐색 후 정보 삭제
    sname = "테스터5";

    if(LFirst(list, &pcard))
    {
        int bool = 0;
        if(strcmp(pcard->name, sname) == 0)
        {
            LRemove(list);
        }

        while(LNext(list, &pcard))
        {
            if(strcmp(pcard->name, sname) == 0)
            {
                LRemove(list);
                bool++;
            }
        }
        if(bool == 0)
            printf("일치하는 항목이 없습니다.\n");
    }



    // 모든 대상 출력

    printf("\n\n[모든 대상 출력]\n\n");

    if(LFirst(list, &pcard))
    {

        ShowNameCardInfo(pcard);
        while(LNext(list, &pcard))
        {
            ShowNameCardInfo(pcard);
        }
    }






    return 0;
}