#ifndef __EMPLOYEE_H__
#define __EMPLOYEE_H__

typedef struct _employee
{
    int id;
    char * name;
} Emp;


// 직원 정보를 등록할 수 있다
Emp * MakeEmployee(int id, char * name);

// 순서대로 당직을 선다
// 등록된 순서대로 돌아가야한다

// 직원 이름과 n일 후 숫자를 받아 해당 날자 후 누가 당직을 서는지 확인한다



#endif