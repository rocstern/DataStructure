#include <stdio.h>
#include <stdlib.h>
#include "Deque.h"

void DequeInit(Deque * pd)
{
    pd->front = (Node *)malloc(sizeof(Node));
    pd->rear = (Node *)malloc(sizeof(Node));

    // 더미 노드 끼리 연결
    pd->front->next = pd->rear;
    pd->rear->prev = pd->front;

    // 끝 부분 NULL처리
    pd->front->prev = NULL;
    pd->rear->next = NULL;
}

int DQIsEmpty(Deque * pd)
{
    if(pd->front->next == pd->rear)
        return TRUE;
    else
        return FALSE;
}

void DQAddFront(Deque * pd, Data data)
{
    Node * newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;

    // front.next와 newNode 연결
    pd->front->next->prev = newNode;
    newNode->next = pd->front->next;

    // front 와 newNode 연결
    pd->front->next = newNode;
    newNode->prev = pd->front;
}

void DQAddRear(Deque * pd, Data data)
{
    Node * newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;

    // rear.prev,와 newNode 연결
    pd->rear->prev->next = newNode;
    newNode->prev = pd->rear->prev;

    // rear와 newNode 연결ㄴ
    pd->rear->prev = newNode;
    newNode->next = pd->rear;
}

Data DQRemoveFront(Deque * pd)
{
    if(DQIsEmpty(pd))
    {
        puts("Deque is Empty\n");
        exit(-1);
    }

    Node * rNode = pd->front->next;
    Data rData = rNode->data;

    rNode->next->prev = pd->front;
    pd->front->next = rNode->next;

    free(rNode);
    return rData;
}

// 뒤 데이터 반환 및 삭제
Data DQRemoveRear(Deque * pd)
{
    if(DQIsEmpty(pd))
    {
        puts("Deque is empty\n");
        exit(-1);
    }

    Node * rNode = pd->rear->prev;
    Data rData = rNode->data;

    pd->rear->prev = rNode->prev;
    rNode->prev->next = pd->rear;

    free(rNode);
    return rData;
}

Data DQGetFront(Deque * pd)
{
    if(DQIsEmpty(pd))
    {
        puts("Deque is empty\n");
        exit(-1);
    }
    return pd->front->next->data;
}

Data DQGetRear(Deque * pd)
{
    if(DQIsEmpty(pd))
    {
        puts("Deque is empty\n");
        exit(-1);
    }

    return pd->rear->prev->data;
}








