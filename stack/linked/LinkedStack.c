#include <stdio.h>
#include <stdlib.h>
#include "LinkedStack.h"


void InitStack(Stack * pstack)
{
    pstack->top = (Node *)malloc(sizeof(Node));
    pstack->top->next = NULL;
}

int SIsEmpty(Stack * pstack)
{
    if(pstack->top->next == NULL)
        return 0;
    else
        return 1;
}

void SPush(Stack * pstack, Data data)
{
    Node * newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;

    newNode->next = pstack->top->next;
    pstack->top->next = newNode;
}

Data SPop(Stack * pstack)
{
    if(pstack->top->next == NULL)
    {
        puts("Stack Memory Error\n");
        exit(-1);
    }

    Node * rNode = pstack->top->next;
    Data rData = rNode->data;

    // list point 정리
    pstack->top->next->next = rNode->next;

    free(rNode);
    return rData;
}

Data SPeek(Stack * pstack)
{
    if(pstack->top->next == NULL)
    {
        puts("Stack Memory Error\n");
        exit(-1);
    }

    return pstack->top->next->data;
}









