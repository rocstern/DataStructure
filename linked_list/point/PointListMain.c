#include <stdio.h>
#include <stdlib.h>
#include "../array_list/ArrayList.h"
#include "Pointer.h"


int main(void)
{
    List list;
    Point comPos;
    Point * ppos;

    ListInit(&list);


    ppos = (Point*) malloc(sizeof(Point));
    SetPointPos(ppos, 2, 2);
    LInsert(&list, ppos);


    ppos = (Point*) malloc(sizeof(Point));
    SetPointPos(ppos, 2, 2);
    LInsert(&list, ppos);

    ppos = (Point*) malloc(sizeof(Point));
    SetPointPos(ppos, 3, 1);
    LInsert(&list, ppos);

    ppos = (Point*) malloc(sizeof(Point));
    SetPointPos(ppos, 3, 2);
    LInsert(&list, ppos);


    // 데이터 출력
    printf("현재 저장된 데이터 수 %d\n", LCount(&list));


    if(LFirst(&list, &ppos))
    {
        ShowPointPos(ppos);

        while(LNext(&list, &ppos))
            ShowPointPos(ppos);
    }

    printf("\n");












    return 0;
}