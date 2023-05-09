#include <stdio.h>
#include <stdlib.h>
#include "CLinkedList.h"



void ListInit(List * plist)
{
    plist->tail = NULL;
    plist->cur = NULL;
    plist->before = NULL;
    plist->numOfData = 0;
}


// 꼬리에 노드를 추가
void LInsert(List * plist, Data data)
{
    Node * newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;

    if(plist->tail == NULL)
    {
        plist->tail = newNode;
        plist->tail->next = plist->tail;
    }
    else
    {
        newNode->next = plist->tail->next;
        plist->tail->next = newNode;
        plist->tail = plist->tail->next;
    }
    plist->numOfData++;
}


// 머리에 노드를 추가
void LInsertFront(List * plist, Data data)
{
    Node * newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;

    if(plist->tail == NULL)
    {
        plist->tail = newNode;
        plist->tail->next = newNode;
    }
    else
    {
        newNode->next = plist->tail->next;
        plist->tail->next = newNode;
    }
    plist->numOfData++;
}


int LFirst(List * plist, Data * pdata)
{
    if(plist->tail == NULL)
        return FALSE;

    plist->before = plist->tail;
    plist->cur = plist->tail->next;

    *pdata = plist->cur->data;
    return TRUE;
}

int LNext(List * plist, Data * pdata)
{
//    원형 노드라 노드가 하나라도 생성된 이상 next가 없는 경우는 없다
//    if(plist->cur->next == NULL)
//        return FALSE;

    if(plist->tail == NULL)
        return FALSE;

    plist->before = plist->cur;
    plist->cur = plist->cur->next;

    *pdata = plist->cur->data;
    return TRUE;
}

Data LRemove(List * plist)
{
    Node *rNode = plist->cur;
    Data rData = rNode->data;

//    원형 리스트는 선형 리스트와 다르게 더미가 존재하지 않는다
//    따라서 tail 노드가 삭제될때와 리스트에 1개 존재하는 노드를 삭제할 경우를 고려해야 한다
//    plist->before->next = plist->cur->next;
//    plist->cur = plist->before;

    // nNode가 tail npde라면
    if (rNode == plist->tail)
    {
        // 그리고 그 tail 노드만 남았다면
        if(rNode == plist->tail->next)
        {
            plist->tail = NULL;
        }
        else
        {
            plist->tail = plist->before;
        }
    }
    plist->before->next = plist->cur->next;
    plist->cur = plist->before;

    plist->numOfData--;
    free(rNode);
    return rData;
}

int LCount(List * plist)
{
    return plist->numOfData;
}









