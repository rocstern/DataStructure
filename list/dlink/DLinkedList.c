#include <stdio.h>
#include <stdlib.h>
#include "DLinkedList.h"


void ListInit(List * plist)
{
    plist->head = NULL;
    plist->numOfData = 0;
}

void LInsert(List * plist, Data data)
{
    Node *newNode = (Node *) malloc(sizeof(Node));
    newNode->data = data;


    /* 중복된 코드를 제거하면 아래와 같다
     *
     * newNode->prev = NULL;

    // 저장된 노드가 하나도 없으면
    if (plist->head == NULL)
    {
        plist->head = newNode;
        plist->head->next = NULL;
    }
    else
    {
        plist->head->prev = newNode;
        newNode->next = plist->head;
        plist->head = newNode;
    }
    */

    //

    if(plist->head != NULL)
        plist->head->prev = newNode;

    newNode->prev = NULL;
    newNode->next = plist->head;
    plist->head = newNode;




    plist->numOfData++;
}



int LFirst(List * plist, Data * pdata)
{
    if(plist->head == NULL)
        return FALSE;

    plist->cur = plist->head;
    *pdata = plist->cur->data;

    return TRUE;
}

int LNext(List * plist, Data * pdata)
{
    if(plist->cur->next == NULL)
    {
//        puts("다음 노드 없음\n");
        return FALSE;
    }

    plist->cur = plist->cur->next;
    *pdata = plist->cur->data;
    return TRUE;
}

int LPrevious(List * plist, Data * pdata)
{
    if(plist->cur->prev == NULL)
        return FALSE;

    plist->cur = plist->cur->prev;
    *pdata = plist->cur->data;

    return TRUE;
}



Data LRemove(List * plist)
{
    Node * rNode = plist->cur;
    Data rData = rNode->data;

    // cur이 head인 상황
    if(plist->cur->prev == NULL)
    {
        plist->head = NULL;
    }
    else
    {
        plist->cur->next->prev = plist->cur->prev;
        plist->cur->prev->next = plist->cur->next;
        plist->cur = plist->cur->prev;
    }

    free(rNode);
    plist->numOfData--;
    return rData;
}

int LCount(List * plist)
{
    return plist->numOfData;
}



void LStatus(List * plist)
{
    printf("NOD: %d\n", plist->numOfData);
    printf("Data: %d\n", plist->cur->data);

    if(plist->cur->next == NULL)
        puts("plist->cur->next == NULL\n");
    if(plist->cur->prev == NULL)
        puts("plist->cur->prev == NULL");
}
















