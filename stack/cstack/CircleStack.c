#include <stdio.h>
#include <stdlib.h>
#include "CircleStack.h"


void InitStack(Stack * pstack)
{
    pstack->top = NULL;
}

int SIsEmpty(Stack * pstack)
{
    if(pstack->top == NULL)
        return FALSE;
    else
        return TRUE;
}


void SPush(Stack * pstack, Data data)
{
    Node * newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;

    if(pstack->top == NULL)
    {
        pstack->top = newNode;
        pstack->top->next = pstack->top;
    }
    else
    {
        newNode->next = pstack->top->next;
        pstack->top = newNode;
    }


}

