#ifndef __DEQUE_H__
#define __DEQUE_H__

#define         TRUE        1
#define         FALSE       0
typedef         int         Data;


typedef struct _node
{
    Data data;
    struct _node * next;
    struct _node * prev;
} Node;


typedef struct _DLDeque
{
    Node * front;
    Node * rear;
} DLDeque;

typedef DLDeque Deque;


// 초기화
void DequeInit(Deque * pd);

// 덱이 빈 경우 1 아닌 경우 0
int DQIsEmpty(Deque * pd);

// 덱의 앞에 저장
void DQAddFront(Deque * pd, Data data);

// 덱 뒤에서 저장
void DQAddRear(Deque * pd, Data data);

// 머리 데이터 반환 및 삭제
Data DQRemoveFront(Deque * pd);

// 뒤 데이터 반환 및 삭제
Data DQRemoveRear(Deque * pd);

// 앞 데이터 반환
Data DQGetFront(Deque * pd);

// 뒤 데이터 반환
Data DQGetRear(Deque * pd);
















#endif