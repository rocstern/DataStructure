#include <stdio.h>
#include <stdlib.h>
#include "DLinkedList.h"


int WhoIsPrecede(LData d1,LData d2)
{
    if(d1 < d2)
        return FALSE;
    else
        return TRUE;
}

int main(void)
{
    List * list = (List *)malloc(sizeof(List));
    LData data;

    ListInit(list);

    SetSortRule(list, WhoIsPrecede);


    LInsert(list, 10);
    LInsert(list, 50);
    LInsert(list, 30);
    LInsert(list, 40);
    LInsert(list, 20);
    LInsert(list, 234);
    LInsert(list, 23);
    LInsert(list, 2);
    LInsert(list, 9999);


    if(LFirst(list, &data))
    {
        printf("%d\n", data);

        while(LNext(list, &data))
        {
            printf("%d\n", data);
        }
    }





















    return 0;
}