#include <stdio.h>

int bSearch(const int * arr, int len, int target)
{
    int first = 0;
    int last = len -1;
    int mid;

    while(first <= last)
    {
        mid = (first + last) / 2;
        if (arr[mid] == target)
            return mid;
        else
        {
            if (target < arr[mid])
                last = mid - 1;
            else
                first = mid - 1;
        }
    }
    return -1;
}



int main(void)
{

    printf("%d\n", 9 /2);

    int arr[10] = {1, 4, 6 , 9, 12, 17, 19, 20, 25, 28};

    int result = bSearch(arr, 10, 2);

    if (result == -1)
        printf("검색한 숫자는 배열에 존재하지 않습니다\n.");
    else
        printf("검색한 숫자는 배열의 %d index에 존재합니다.\n", result);




}