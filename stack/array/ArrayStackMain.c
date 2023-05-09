#include <stdio.h>
#include "ArrayBaseStack.h"

int main(void)
{
    Stack stack;
    StackInit(&stack);

    SPush(&stack, 11);
    SPush(&stack, 22);
    SPush(&stack, 33);
    SPush(&stack, 44);
    SPush(&stack, 55);

    while(SIsEmpty(&stack))
    {
        printf("%d\n", SPop(&stack));
    }







    return 0;
}