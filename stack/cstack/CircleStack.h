#ifndef __CIRCLE_STACK_H__
#define __CIRCLE_STACK_H__


#define         TRUE        1
#define         FALSE       0
typedef         int         Data;


typedef struct _node
{
    Data data;
    struct _node * next;
} Node;

typedef struct _CircleStack
{
    Node * top;
} CircleStack;

typedef CircleStack Stack;

void InitStack(Stack * pstack);

int SIsEmpty(Stack * pstack);

void SPush(Stack * pstack, Data data);

Data SPop(Stack * pstack);

Data SPeek(Stack * pstack);










#endif