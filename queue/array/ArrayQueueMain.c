#include <stdio.h>
#include "ArrayBaseQueue.h"


int main(void)
{
    Queue que;
    QueueInit(&que);

    EnQueue(&que, 11);
    EnQueue(&que, 22);
    EnQueue(&que, 33);
    EnQueue(&que, 44);
    EnQueue(&que, 55);
    EnQueue(&que, 66);
    EnQueue(&que, 77);
    EnQueue(&que, 88);
    EnQueue(&que, 99);

    while(QIsEmpty(&que) == FALSE)
    {
        QStatus(&que);
        printf("%d\n", DeQueue(&que));
    }

    QStatus(&que);





    return 0;
}