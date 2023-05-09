#ifndef __D_LINKED_LIST_H__
#define __D_LINKED_LIST_H__

#define     TRUE        1
#define     FALSE       0
typedef     int         Data;

typedef struct _node
{
    Data data;
    struct _node * next;
    struct _node * prev;
} Node;


typedef struct _dlist
{
    Node * head;
    Node * cur;
    int numOfData;
} DList;

typedef DList List;




void ListInit(List * plist);

void LInsert(List * plist, Data data);

int LFirst(List * plist, Data * pdata);

int LNext(List * plist, Data * pdata);

int LPrevious(List * plist, Data * pdata);

Data LRemove(List * plist);

int LCount(List * plist);

void LStatus(List * plist);










#endif