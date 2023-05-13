#include <stdio.h>
#include "ListBaseQueue.h"

int main(void)
{
    Queue que;
    QueueInit(&que);

    Enqueue(&que, 11);
    Enqueue(&que, 22);
    Enqueue(&que, 33);
    Enqueue(&que, 44);
    Enqueue(&que, 55);
    Enqueue(&que, 66);
    Enqueue(&que, 77);
    Enqueue(&que, 88);
    Enqueue(&que, 99);

    while(QIsEmpty(&que) == FALSE)
    {
        printf("%d\n", Dequeue(&que));
    }

    return 0;
}