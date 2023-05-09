#include <stdio.h>
#include <stdlib.h>
#include "Employee.h"



// 직원 정보를 등록할 수 있다
Emp * MakeEmployee(int id, char * name)
{
    Emp * pemp = (Emp *)malloc(sizeof(Emp));
    pemp->id = id;
    pemp->name = name;
    return pemp;
}



