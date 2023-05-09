#include <stdio.h>
#include <stdlib.h>
#include "ArrayBaseStack.h"

// 스텍의 초기화를 진행한다
// 스텍 생성후 가장 먼저 호출
void StackInit(Stack * pstack)
{
    pstack->topIndex = -1;
}

// 스텍이 빈 경우 true 1, or false 0
int SIsEmpty(Stack * pstack)
{
    if(pstack->topIndex != -1)
        return FALSE;
    else
        return TRUE;

}

// 스텍에 데이터를 저장한다
void SPush(Stack * pstack, Data data)
{
    pstack->topIndex += 1;
    printf("[topIndex]: %d\n", pstack->topIndex);
    pstack->stackArray[pstack->topIndex] = data;
}

// 마지막에 저장된 요소를 삭제한다
// 삭제한 데이터는 반환
// 데이터 하나 이상 존재함이 보장되야 한다
Data SPop(Stack * pstack)
{
    int rIdx;

    if(SIsEmpty(pstack) == TRUE)
    {
        puts("pop Stack Memory Error!\n");
        exit(-1);
    }

    rIdx = pstack->topIndex;
    pstack->topIndex -= 1;

    return pstack->stackArray[rIdx];
}

// 마지막 저장된 요소 반한
// 데이터 하나 이상 존재함이 보장되야 한다
Data SPeek(Stack * pstack)
{
    if(SIsEmpty(pstack) == TRUE)
    {
        puts("Stack Memory Error!\n");
        exit(-1);
    }
    return pstack->stackArray[pstack->topIndex];
}

