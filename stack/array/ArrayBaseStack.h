#ifndef __ARRAY_BASE_STACK_H__
#define __ARRAY_BASE_STACK_H__

#define     TRUE        1
#define     FALSE       0
#define     STACK_LEN   100
typedef     int         Data;





typedef struct _ArrayStack
{
    Data stackArray[STACK_LEN];
    int topIndex;
} ArrayStack;

typedef ArrayStack Stack;





// 스텍의 초기화를 진행한다
// 스텍 생성후 가장 먼저 호출
void StackInit(Stack * pstack);


// 스텍이 빈 경우 true 1, or false 0
int SIsEmpty(Stack * pstack);


// 스텍에 데이터를 저장한다
void SPush(Stack * pstack, Data data);


// 마지막에 저장된 요소를 삭제한다
// 삭제한 데이터는 반환
// 데이터 하나 이상 존재함이 보장되야 한다
Data SPop(Stack * pstack);


// 마지막 저장된 요소 반한
// 데이터 하나 이상 존재함이 보장되야 한다
Data SPeek(Stack * pstack);







#endif