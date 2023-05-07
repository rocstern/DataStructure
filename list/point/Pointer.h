#ifndef __POINTER_H__
#define __POINTER_H__

typedef struct __Point
{
    int xpos;
    int ypos;
} Point;

// x y 좌표값을 저장할 수 있다
void SetPointPos(Point * ppos, int xpos, int ypos);

// 저장된 좌표값을 출력할 수 있다
void ShowPointPos(Point * ppos);

// 전달된 두 좌표값 비교
// xpos만 같으면 1
// ypos만 같으면 2
// 모두 같으면 0
// 모두 다르면 -1
int PointComp(Point * pos1, Point * pos2);



#endif
