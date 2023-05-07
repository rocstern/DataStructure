#include <stdio.h>
#include "Pointer.h"


void SetPointPos(Point * ppos, int xpos, int ypos)
{
    ppos->xpos = xpos;
    ppos->ypos = ypos;
}

void ShowPointPos(Point * ppos)
{
    printf("[%d, %d]\n", ppos->xpos, ppos->ypos);
}

int PointComp(Point * pos1, Point * pos2)
{
    /*
     * if(pos1->xpos == pos2->xpos)
    {
        // xpos 와 ypos 모두 같다
        if(pos1->ypos == pos2->ypos)
        {
            return 0;
        }
        // xpos만 같다
        else
        {
            return 1;
        }
    }
    else
    {
        // ypos만 같다
        if(pos1->ypos == pos2->ypos)
        {
            return 2;
        }
        // xpos와 ypos 모두 다르다
        else
        {
            return -1;
        }
    }*/

    // xpos ypos 모두 같다
    if(pos1->xpos == pos2->xpos && (*pos1).ypos == pos2->ypos)
        return 0;
    // xpos만 같다 -> 먼저 위에서 x y 모두 같은 경우를 걸렀음으로 xpos만 비교해도 된다
    else if(pos1->xpos == pos2->xpos)
        return 1;
    // ypos만 같다
    else if(pos1->ypos == pos2->ypos)
        return 2;
    // 모두 다르다
    else
        return -1;


     return -100;


}



