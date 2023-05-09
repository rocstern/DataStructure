#include <stdio.h>
#include "CLinkedList.h"

int main(void)
{
    List list;
    int data, nodeNum;
    ListInit(&list);

    LInsert(&list, 3);
    LInsert(&list, 4);
    LInsert(&list,5);
    LInsertFront(&list,2);
    LInsertFront(&list,1);

    if(LFirst(&list, &data))
    {
        printf("%d\n", data);

        for (int i = 0; i < LCount(&list)*3-1; i++)
        {
            if(LNext(&list, &data))
                printf("%d\n", data);
        }
    }


    nodeNum = LCount(&list);

//    for (int i = 0; i < nodeNum - 1; i++)
//    {
//        LNext(&list, &data);
//        if(data % 2 == 0)
//        {
//            LRemove(&list);
//        }
//    }

    if(nodeNum != 0)
    {
        LFirst(&list, &data);
        if(data % 2 == 0)
            LRemove(&list);

        for (int i = 0; i < nodeNum - 1; i++)
        {
            LNext(&list, &data);
            if(data % 2 == 0)
                LRemove(&list);
        }
    }



    nodeNum = LCount(&list);
    printf("\n\n\n");

    if(LFirst(&list, &data))
    {
        printf("%d\n", data);
        for (int i = 0; i < nodeNum-1; i++)
        {
            LNext(&list, &data);
            printf("%d\n", data);
        }
    }





    return 0;
}