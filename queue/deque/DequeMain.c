#include <stdio.h>
#include "Deque.h"

int main(void)
{
    Deque dq;
    DequeInit(&dq);

    DQAddFront(&dq, 11);
    DQAddFront(&dq, 22);
    DQAddFront(&dq, 33);
    DQAddFront(&dq, 44);

    DQAddRear(&dq, 55);
    DQAddRear(&dq, 66);
    DQAddRear(&dq, 77);
    DQAddRear(&dq, 88);
    DQAddRear(&dq, 99);

    while(DQIsEmpty(&dq) == FALSE)
    {
        printf("%d\n", DQRemoveFront(&dq));
    }

    return 0;
}