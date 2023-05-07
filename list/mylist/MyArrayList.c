#include <stdio.h>
#include <stdlib.h>
#include "MyArrayList.h"

// 리스트를 동적할당 후 초기화 하여 반환한다
// 리스트를 사용하려면 가장 먼저 사용해야 한다
List * ListInit()
{
    List * plist;
    plist = (List *)malloc(sizeof(List));

    plist->numOfData = 0;
    // LRomove와 연계하기 위해서 참조 함수는 먼저 pos++ 한 후 나오는 데이터를 반환한다
    // 이러면 LRemove는 따로 pos값을 수정하지 않고도 삭제할 수 있다
    plist->curPos = -1;

    return plist;
}


// 리스트에 데이터를 저장한다
// 매개변수 data에 전달된 값을 저장한다
int LInsert(List * plist, LData data)
{
    // 저장된 데이터 수가 한계일때
    if(plist->numOfData >= arr_len)
    {
        puts("[MyArrayList.c] 저장 가능한 터이터 수 한계를 초과했습니다.\n");
        return FALSE;
    }

    // index(numOfData)에 data 저장 후 NOD++
    plist->arr[plist->numOfData] = data;
    plist->numOfData++;

    return TRUE;
}

// 첫 번째 데이터가 pdata가 가르키는 메모리에 저장된다
// 데이터의 참조를 위한 초기화가 진행
// 참조 성공 시 TRUE, 실패 시 FALSE 반환
// 참조 성공 시 TRUE, 실패 시 FALSE 반환
int LFirst(List * plist, LData * pdata)
{
    if(plist->numOfData == 0)
        return FALSE;

    plist->curPos = 0;
    *pdata = plist->arr[plist->curPos];

    return TRUE;
}


// 참조된 데이터의 다음 데이터가 pdata가 가르키는 메모리에 저장된다
// 순차적인 참조를 위해서 반복 호출이 가능하다
// 차마조를 새로 시작하려면 먼저 LFirst 함수를 호출해야 한다
// 참조 성공 시 TRUE, 실패 시 FALSE 반환
int LNext(List * plist, LData * pdata)
{
    // 가르키는 index가 한계에 달했을때 false 반환
//    if(plist->curPos >= arr_len - 1)
    // 틀림 NOD와 비교해야 저장된 데이터가 없으면 False를 반환함
    // 위는 데이터 저장 유무와는 관계없이 배열끝까지 반환함
    if(plist->curPos >= plist->numOfData - 1)
        return FALSE;

    plist->curPos++;
    *pdata = plist->arr[plist->curPos];

    return TRUE;
}


// LFirst 또는 LNext 함수의 마지막 반환 데이터를 삭제한다
// 삭제된 데이터는 반환된다 ->>>>> 중요! 동적할당된 데이터를 free 해주기 위해
// 마지막 반환 데이터를 삭제하므로 연이은 반복호출을 허용하지 않는다
LData LRemove(List * plist)
{
    if(plist->numOfData == 0)
        return FALSE;

    LData delData = plist->arr[plist->curPos];
    int delIndex = plist->curPos;

    while(delIndex < plist->numOfData - 1)
    {
        plist->arr[delIndex] = plist->arr[delIndex + 1];
        delIndex++;
    }
    plist->curPos--;
    plist->numOfData--;

    return delData;
}


// 리스트에 저장되어 있는 데이터 수를 반환한다
int LCount(List * plist)
{
    return plist->numOfData;
}


// numOfData와 curPos를 출력한다
void LReport(List * plist)
{
    printf("[LReport] NOD: %d\tPOS: %d\n", plist->numOfData, plist->curPos);
}


























