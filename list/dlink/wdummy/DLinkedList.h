#ifndef _D_LINKED_LIST_H__
#define _D_LINKED_LIST_H__

#define     TRUE        1
#define     FALSE       0
typedef     int         Data;


typedef struct _node
{
    Data data;
    struct _node * next;
    struct _node * prev;
} Node;


typedef struct _dbDlinkedList
{
    Node * head;
    Node * tail;
    Node * cur;
    int numOfData;
} DBDLinkedList;

typedef DBDLinkedList List;


void ListInit(List * plist);

// 꼬리에 추가
void LInsert(List * plist, Data data);

int LFirst(List * plist, Data * pdata);

int LNext(List * plist, Data * pdata);

Data LRemove(List * plist);

int LCount(List * plist);

void LStatus(List * plist);




















#endif
