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

    comPos.xpos = 2;
    comPos.ypos = 0;

    if(LFirst(&list, &ppos))
    {
        if(PointComp(ppos, &comPos) == 1)
        {
            ppos = LRemove(&list);
            free(ppos);
        }

        while(LNext(&list, &ppos))
        {
            if(PointComp(ppos, &comPos) == 1)
            {
                ppos = LRemove(&list);
                free(ppos);
            }
        }
    }

    printf("현재 데이터의 수: %d\n", LCount(&list));

    if(LFirst(&list, &ppos))
    {
        ShowPointPos(ppos);

        while(LNext(&list, &ppos))
        {
            ShowPointPos(ppos);

        }
    }

    printf("\n\n");


    return 0;
}