#ifndef __ARRAY_BASE_QUEUE_H_
#define __ARRAY_BASE_QUEUE_H_

#define         TRUE        1
#define         FALSE       0

#define         QUE_LEN     100
typedef         int         Data;


typedef struct _ArrayQueue
{
    Data queArr[QUE_LEN];
    int front;
    int rear;
} ArrayQueue;

typedef ArrayQueue Queue;


// 큐 초기화 함수
void QueueInit(Queue * pq);


// 큐가 빈 경우 1 아닌 경우 0
int QIsEmpty(Queue * pq);


// 큐에 테이터를 저장 매개변수 data로 전달값 저장
void EnQueue(Queue * pq, Data data);


// 저장순서가 가장 앞선 데이터 삭제
// 삭제된 데이터 반환
// 데이터가 하나 이상 존재함이 보장되야함
Data DeQueue(Queue * pq);


// 저장순서가 가장 앞선 데이터 반환
// 데이터 하나 이상 존재함이 보장되야함
Data QPeek(Queue * pq);



void QStatus(Queue * pq);





#endif