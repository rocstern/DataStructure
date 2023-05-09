#include <stdio.h>
#include "DLinkedList.h"

int main(void)
{
    List list;
    Data data;
    ListInit(&list);

    LInsert(&list, 11);
    LInsert(&list, 22);
    LInsert(&list, 33);
    LInsert(&list, 44);
    LInsert(&list, 55);
    LInsert(&list, 66);
    LInsert(&list, 77);
    LInsert(&list, 88);
    LInsert(&list, 99);

    if(LFirst(&list, &data))
    {
        printf("%d\n", data);

        while(LNext(&list, &data))
        {
            printf("%d\n", data);
        }

        while(LPrevious(&list, &data))
        {
            printf("%d\n", data);
        }
    }

    puts("\n\n");

    LFirst(&list, &data);
    if(data != 22)
    {
        for (int i = 0; i < list.numOfData; i++)
        {
            LNext(&list, &data);
            if(data == 22)
                break;
        }
    }
    LRemove(&list);

    LStatus(&list);
    printf("%d\n", list.numOfData);


    if(LFirst(&list, &data))
    {
        printf("%d\n", data);

        while(LNext(&list, &data))
        {
            printf("%d\n", data);
        }
    }




    return 0;
}