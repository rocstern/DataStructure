//#include <stdio.h>
//
//int recBinarySearch(int * arr, int len, int target, int first, int last)
//{
//    // target이 arr에 없을때
//    if (first > last)
//        return -1;
//
//    int mid = (first + last) / 2;
//
//    if (arr[mid] == target)
//        return mid;
//
//    if (arr[mid] > target)
//    {
//        last = mid - 1;
//        return recBinarySearch(arr, len, target, first, last);
//    }
//    if (arr[mid] < target)
//    {
//        first = mid + 1;
//        return recBinarySearch(arr, len, target, first, last);
//    }
//}
//
//
//int main(void) {
//
//    int arr[10] = {1, 4, 7, 9, 11, 34, 68, 98, 100, 150};
//    int target = 100;
//    int len = 10;
//
//    int result = recBinarySearch(arr, len, target, 0, len);
//
//    if (result == -1)
//        printf("%d이 배열 내 존재하지 않습니다.\n", target);
//    else
//        printf("%d이 배열 내 %d index에 존재합니다.\n", target, result);
//
//
//}


// 수정이 필요한 부분
// 1, len은 매개함수로 받을 필요없음
// 2. last는 인덱스고 len은 길이니 last = len -1이 되야함

#include <stdio.h>

int recBinarySearch(int * arr, int target, int first, int last)
{
    // target이 arr에 없을때
    if (first > last)
        return -1;

    int mid = (first + last) / 2;

    if (arr[mid] == target)
        return mid;

    if (arr[mid] > target)
    {
        last = mid - 1;
        return recBinarySearch(arr, target, first, last);
    }
    if (arr[mid] < target)
    {
        first = mid + 1;
        return recBinarySearch(arr, target, first, last);
    }
}


int main(void) {

    int arr[10] = {1, 4, 7, 9, 11, 34, 68, 98, 100, 150};
    int target = 100;
    int len = 10;

    int result = recBinarySearch(arr, target, 0, len - 1);

    if (result == -1)
        printf("%d이 배열 내 존재하지 않습니다.\n", target);
    else
        printf("%d이 배열 내 %d index에 존재합니다.\n", target, result);


}
