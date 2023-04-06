#include <stdio.h>
#include "ArrayList.h"

int main(void)
{
    ArrayList list;
    ListInit(&list);

    for (int i = 1; i < 10; i++)
    {
        LInsert(&list, i);
    }




    return 0;
}