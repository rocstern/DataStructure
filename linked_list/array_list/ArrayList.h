#include "../point/Pointer.h"
#ifndef __ARRAY_LIST_H__
#define __ARRAY_LIST_H__

#define TRUE	1
#define FALSE	0

#define LIST_LEN	100

// int 배열
//typedef int LData;

// Point 주소값 배열
typedef Point * LData;

typedef struct __ArrayList
{
	LData arr[LIST_LEN];
	int numOfData;
	int curPosition;
};


typedef struct __ArrayList List;

void ListInit(List * plist);
void LInsert(List * plist, LData data);

int LFirst(List * plist, LData * pdata);
int LNext(List * plist, LData * pdata);

LData LRemove(List * plist);
int LCount(List * plist);

#endif