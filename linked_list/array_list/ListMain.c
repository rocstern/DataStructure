#include <stdio.h>
#include "ArrayList.h"

int main(void)
{
//    List array_list; 밑 선언은 구조체변수명
    struct __ArrayList list;
    int data;

    ListInit(&list);

    LInsert(&list, 11);
    LInsert(&list, 11);
    LInsert(&list, 22);
    LInsert(&list, 22);
    LInsert(&list, 33);

    printf("현재 데이터 수: %d \n", LCount(&list));

    if(LFirst(&list, &data))
    {
        printf("%d \n", data);

        while(LNext(&list, &data))
        {
        printf("%d \n", data);
        }
    }

    if(LFirst(&list, &data))
    {
        if(data == 22) { LRemove(&list); }

        while(LNext(&list, &data))
        {
            if(data == 22) { LRemove(&list); }
        }

    }

    printf("\n\n");

    if(LFirst(&list, &data))
    {
        printf("%d \n", data);

        while(LNext(&list, &data))
        {
            printf("%d \n", data);
        }
    }



    return 0;
}