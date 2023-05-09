#include <stdlib.h>
#include "DLinkedList.h"


void FInsert(List * plist, LData data)
{
    Node * newNode = (Node *) malloc(sizeof(Node));
    newNode->data = data;

    // 새로운 노드를 가장 앞자리에 추가한다
    //
    newNode->next = plist->head->next;
    plist->head->next = newNode;

    plist->numOfData++;
}

void SInsert(List * plist, LData data)
{
    Node * newNode = (Node *)malloc(sizeof(Node));
    Node * pred = plist->head;

    newNode->data = data;

    while(pred->next != NULL && plist->comp(data, pred->next->data) != FALSE)
    {
        pred = pred->next;
    }

    newNode->next = pred->next;
    pred->next = newNode;

    plist->numOfData++;
}


// 초기화할 리스트의 주소값을 인자로 전달받는다
// 리스트 생성 후 가장 먼저 호출되는 함수
void ListInit(List * plist)
{
    plist->head = (Node *)malloc(sizeof(Node));
    plist->head->next = NULL;
    plist->comp = NULL;
    plist->numOfData = 0;
}

// 리스트에 데이터를 저장한다
// 매개변수 data에 전달된 값을 저장한다
int LInsert(List * plist, LData data)
{
    if(plist->comp == NULL)
        FInsert(plist, data);
    else
        SInsert(plist, data);
}


// 첫 번째 데이터가 pdata가 가르키는 메모리에 저장된다
// 데이터의 참조를 위한 초기화가 진행
// 참조 성공 시 TRUE, 실패 시 FALSE 반환
int LFirst(List * plist, LData * pdata)
{
    if(plist->head->next == NULL)
        return FALSE;

    plist->before = plist->head;
    plist->cur = plist->head->next;

    *pdata = plist->head->next->data;

    return TRUE;
}


// 참조된 데이터의 다음 데이터가 pdata가 가르키는 메모리에 저장된다
// 순차적인 참조를 위해서 반복 호출이 가능하다
// 차마조를 새로 시작하려면 먼저 LFirst 함수를 호출해야 한다
// 참조 성공 시 TRUE, 실패 시 FALSE 반환
int LNext(List * plist, LData * pdata)
{
    if(plist->cur->next == NULL)
        return FALSE;

    // 한칸씩 앞으로 이동
    plist->before = plist->cur;
    plist->cur = plist->cur->next;

    *pdata = plist->cur->data;
    return TRUE;
}


// LFirst 또는 LNext 함수의 마지막 반환 데이터를 삭제한다
// 삭제된 데이터는 반환된다 ->>>>> 중요! 동적할당된 데이터를 free 해주기 위해
// 마지막 반환 데이터를 삭제하므로 연이은 반복호출을 허용하지 않는다
LData LRemove(List * plist)
{
    Node * rpos = plist->cur;
    LData rdata = plist->cur->data;

    plist->before->next = plist->cur->next;
    plist->cur = plist->before;

    free(rpos);
    plist->numOfData--;
    return rdata;
}


// 리스트에 저장되어 있는 데이터 수를 반환한다
int LCount(List * plist)
{
    return plist->numOfData;
}


// 리스트 정렬의 기준이 되는 함수를 등록한다
void SetSortRule(List * plist, int (*comp)(LData d1, LData d2))
{
    plist->comp = comp;
}























