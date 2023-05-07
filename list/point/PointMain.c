#include <stdio.h>
#include "Pointer.h"

int main(void)
{
    Point pnt1;
    Point pnt2;

    int xpos1 = 10;
    int ypos1 = 20;

    int xpos2 = 10;
    int ypos2 = 200;


    SetPointPos(&pnt1, xpos1, ypos1);
    ShowPointPos(&pnt1);


    SetPointPos(&pnt2, xpos2, ypos2);
    ShowPointPos(&pnt2);

    int result = PointComp(&pnt1, &pnt2);
    printf("result: %d \n", result);



    return 0;
}