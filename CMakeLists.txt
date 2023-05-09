cmake_minimum_required(VERSION 3.24)
project(DataStructure C)

set(CMAKE_C_STANDARD 11)

#add_executable(SLink list/slink/DLinkedListMain.c list/slink/DLinkedList.c)

#add_executable(Point list/point/PointListMain.c list/point/Pointer.c list/slink/DLinkedList.c)

add_executable(CLink list/clink/CLinkedListMain.c list/clink/ClinkedList.c)

add_executable(Emp list/clink/employee/EmployeeMain.c list/clink/employee/Employee.c list/clink/CLinkedList.c)

