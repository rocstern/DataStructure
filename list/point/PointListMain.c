#include <stdio.h>
#include <stdlib.h>
#include "../slinked/DLinkedList.h"
#include "Pointer.h"


int WhoIsFaster(LData d1, LData d2)
{
    // xpos 대소관계가 명확히 갈림
    if(d1->xpos > d2->xpos)         {return TRUE;}
    else if(d1->xpos < d2->xpos)    {return FALSE;}

    // 남은 경우의 수는 모두 d1x == d2x 이다
    else if(d1->ypos > d2->ypos)    {return TRUE;}
    else                            {return FALSE;}
}



int main(void)
{
    List list;
    Point comPos;
    Point * ppos;

    ListInit(&list);

    SetSortRule(&list, WhoIsFaster);

    ppos = (Point*) malloc(sizeof(Point));
    SetPointPos(ppos, 8, 5);
    LInsert(&list, ppos);


    ppos = (Point*) malloc(sizeof(Point));
    SetPointPos(ppos, 2, 1);
    LInsert(&list, ppos);

    ppos = (Point*) malloc(sizeof(Point));
    SetPointPos(ppos, 3, 1);
    LInsert(&list, ppos);

    ppos = (Point*) malloc(sizeof(Point));
    SetPointPos(ppos, 5, 9);
    LInsert(&list, ppos);

    ppos = (Point*) malloc(sizeof(Point));
    SetPointPos(ppos, 1, 100);
    LInsert(&list, ppos);

    ppos = (Point*) malloc(sizeof(Point));
    SetPointPos(ppos, 7, 2);
    LInsert(&list, ppos);

    ppos = (Point*) malloc(sizeof(Point));
    SetPointPos(ppos, 10, 10);
    LInsert(&list, ppos);

    ppos = (Point*) malloc(sizeof(Point));
    SetPointPos(ppos, 1, 1);
    LInsert(&list, ppos);

    ppos = (Point*) malloc(sizeof(Point));
    SetPointPos(ppos, 4, 4);
    LInsert(&list, ppos);

    ppos = (Point*) malloc(sizeof(Point));
    SetPointPos(ppos, 6, 10);
    LInsert(&list, ppos);

    ppos = (Point*) malloc(sizeof(Point));
    SetPointPos(ppos, 4, 1);
    LInsert(&list, ppos);

    ppos = (Point*) malloc(sizeof(Point));
    SetPointPos(ppos, 7, 19);
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











   /* comPos.xpos = 2;
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

    printf("\n\n");*/


    return 0;
}