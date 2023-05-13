#include <stdio.h>
#include <stdlib.h>
#include "ArrayBaseQueue.h"

int NextPosIndex(int pos)
{
    if(pos == QUE_LEN -1)
        return 0;
    else
        return pos+1;
}


// 큐 초기화 함수
void QueueInit(Queue * pq)
{
    pq->front = 0;
    pq->rear = 0;
}

// 큐가 빈 경우 1 아닌 경우 0
int QIsEmpty(Queue * pq)
{
    if(pq->front == pq->rear)
        return TRUE;
    else
        return FALSE;
}

// 큐에 테이터를 저장 매개변수 data로 전달값 저장
void EnQueue(Queue * pq, Data data)
{
    // 배열이 꽉찬 경우
    if(pq->front == NextPosIndex(pq->rear))
    {
        puts("저장 한계 초과!\n");
        exit(-1);
    }

    pq->rear = NextPosIndex(pq->rear);
    pq->queArr[pq->rear] = data;
}

// 저장순서가 가장 앞선 데이터 삭제
// 삭제된 데이터 반환
// 데이터가 하나 이상 존재함이 보장되야함
Data DeQueue(Queue * pq)
{
    if(pq->front == pq->rear)
    {
        puts("Empty Queue\n");
        exit(-1);
    }

    pq->front = NextPosIndex(pq->front);
    return pq->queArr[pq->front];
}


// 저장순서가 가장 앞선 데이터 반환
// 데이터 하나 이상 존재함이 보장되야함
Data QPeek(Queue * pq)
{
    if(pq->front == pq->rear)
    {
        puts("Empty Queue\n");
        exit(-1);
    }

    return pq->queArr[pq->front];
}


void QStatus(Queue * pq)
{
    printf("front: %d\n", pq->front);
    printf("rear: %d\n", pq->rear);
}











