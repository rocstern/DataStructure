#include <stdio.h>
#include "MyArrayList.h"

int main(void)
{
    LData data;
    List * nList = ListInit();

    LInsert(nList, 10);
    LInsert(nList, 20);
    LInsert(nList, 30);
    LInsert(nList, 40);
    LInsert(nList, 50);
    LInsert(nList, 60);
    LInsert(nList, 70);

    puts("\n\n");

    if(LFirst(nList, &data))
    {
        printf("%d\n", data);

        while(LNext(nList, &data))
        {
            printf("%d\n", data);
        }
    }


    puts("\n\n\n");


    if(LFirst(nList, &data))
    {
        if(data == 30 || data == 90)
            LRemove(nList);

        while(LNext(nList, &data))
        {
            if(data == 30 || data == 70)
                LRemove(nList);
        }
    }

    LInsert(nList, 11);
    LInsert(nList, 22);
    LInsert(nList, 33);
    LInsert(nList, 44);
    LInsert(nList, 55);
    LInsert(nList, 55);
    LInsert(nList, 55);



    if(LFirst(nList, &data))
    {
        printf("%d\n", data);

        while(LNext(nList, &data))
        {
            printf("%d\n", data);
        }
    }
    LReport(nList);


    return 0;
}