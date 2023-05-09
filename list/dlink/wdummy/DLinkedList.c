#include <stdio.h>
#include <stdlib.h>
#include "DLinkedList.h"


void ListInit(List * plist)
{
    plist->head = (Node *)malloc(sizeof(Node));
    plist->tail = (Node *)malloc(sizeof(Node));

    plist->head->next = plist->tail;
    plist->tail->prev = plist->head;

    plist->head->prev = NULL;
    plist->tail->next = NULL;

    plist->numOfData = 0;
}


// 꼬리에 추가
void LInsert(List * plist, Data data)
{
    if(plist->tail == NULL)
        return;

    Node * newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;

    // prev <=> newNode
    newNode->prev = plist->tail->prev;
    plist->tail->prev->next = newNode;

    // newNode <=> tail
    plist->tail->prev = newNode;
    newNode->next = plist->tail;

    plist->numOfData++;
}

int LFirst(List * plist, Data * pdata)
{
    if(plist->tail->prev == plist->head)
        return FALSE;

    plist->cur = plist->tail->prev;
    *pdata = plist->cur->data;

    return TRUE;
}


int LNext(List * plist, Data * pdata)
{
    if(plist->cur->prev == plist->head)
        return FALSE;

    plist->cur = plist->cur->prev;
    *pdata = plist->cur->data;

    return TRUE;
}

Data LRemove(List * plist)
{
    Node * rNode = plist->cur;
    Data rData = rNode->data;

    // prev <=> next
    plist->cur->prev->next = rNode->next;
    plist->cur->next->prev = rNode->prev;

    plist->cur = rNode->next;

    plist->numOfData--;
    free(rNode);
    return rData;
}

int LCount(List * plist)
{
    return plist->numOfData;
}



























