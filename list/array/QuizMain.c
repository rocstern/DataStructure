#include <stdio.h>
#include "ArrayList.h"

int main(void)
{
    struct __ArrayList list;
    int data;
    int total;

    ListInit(&list);

    for (int i = 1; i < 10; i++)
    {
        LInsert(&list, i);
    }

    total = 0;

    if(LFirst(&list, &data))
    {
        total += data;
        while(LNext(&list, &data))
        {
            total += data;
        }
    }

    printf("저장된 데이터 총합: %d \n", total);

    if(LFirst(&list, &data))
    {
        if(data % 2 == 0 || data % 3 == 0)
            LRemove(&list);

        while(LNext(&list, &data))
        {
            if(data % 2 == 0 || data % 3 == 0)
                LRemove(&list);
        }
    }

    if(LFirst(&list, &data))
    {
        printf("데이터 출력: %d \n", data);

        while(LNext(&list, &data))
        {
            printf("데이터 출력: %d \n", data);
        }
    }



    return 0;
}