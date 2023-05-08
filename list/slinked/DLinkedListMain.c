#include <stdio.h>
#include <stdlib.h>
#include "DLinkedList.h"


int main(void)
{
    List * mlist = (List *)malloc(sizeof(List));
    LData data;

    ListInit(mlist);


    LInsert(mlist, 10);
    LInsert(mlist, 20);
    LInsert(mlist, 30);
    LInsert(mlist, 40);
    LInsert(mlist, 50);


    if(LFirst(mlist, &data))
    {
        printf("%d\n", data);

        while(LNext(mlist, &data))
        {
            printf("%d\n", data);
        }
    }





















    return 0;
}