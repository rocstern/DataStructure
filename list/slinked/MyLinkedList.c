#include <stdlib.h>
#include "DLinkedList.h"


// 초기화할 리스트의 주소값을 인자로 전달받는다
// 리스트 생성 후 가장 먼저 호출되는 함수
void ListInit(List * plist)
{
    // HEAD에 빈 노드를 하나 만든다
    plist->head = (Node *)malloc(sizeof(Node));
    // 리스트 끝 Node의 next가 NULL이여야 검색이 끝날 수 있다
    plist->head->next = NULL;
    plist->comp = NULL;
    plist->numOfData = 0;
}

// 리스트에 데이터를 저장한다
// 매개변수 data에 전달된 값을 저장한다
int LInsert(List * plist, LData data)
{
    // ListInit이 실행 안됬을때
    if(plist->head == NULL)
        return FALSE;

    Node * newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = plist->head->next;

    plist->head->next = newNode;
    plist->numOfData++;
    return TRUE;
}

// 첫 번째 데이터가 pdata가 가르키는 메모리에 저장된다
// 데이터의 참조를 위한 초기화가 진행
// 참조 성공 시 TRUE, 실패 시 FALSE 반환
int LFirst(List * plist, LData * pdata)
{
    if(plist->head->next == NULL)
        return FALSE;

    plist->cur = plist->head->next;
    *pdata = plist->cur->data;

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
    if(plist->before == NULL)
        return FALSE;

    Node * delNode = plist->cur;
    LData delData = delNode->data;

    plist->before->next = plist->cur->next;
    plist->cur = plist->before;

    free(delNode);
    plist->numOfData--;
    return delData;
}


// 리스트에 저장되어 있는 데이터 수를 반환한다
int LCount(List * plist)
{
    return plist->numOfData;
}



































