cmake_minimum_required(VERSION 3.24)
project(DataStructure C)

set(CMAKE_C_STANDARD 11)

#add_executable(SLink list/slink/DLinkedListMain.c list/slink/DLinkedList.c)

#add_executable(Point list/point/PointListMain.c list/point/Pointer.c list/slink/DLinkedList.c)

#add_executable(CLink list/clink/CLinkedListMain.c list/clink/ClinkedList.c)

#add_executable(Emp list/clink/employee/EmployeeMain.c list/clink/employee/Employee.c list/clink/CLinkedList.c)


#add_executable(DLink list/dlink/wdummy/DlinkedListMain.c list/dlink/wdummy/DLinkedList.c)

#add_executable(AStack stack/array/ArrayStackMain.c stack/array/ArrayBaseStack.c)

#add_executable(LStack stack/linked/LinkedStackMain.c stack/linked/LinkedStack.c)

#add_executable(CStack stack/cstack/CircleStackMain.c stack/cstack/CircleStack.c)

#add_executable(Queue queue/array/ArrayQueueMain.c queue/array/ArrayBaseQueue.c)

add_executable(Queue queue/list/ListQueueMain.c queue/list/ListBaseeQueue.c)

add_executable(Deque queue/deque/DequeMain.c queue/deque/Deque.c)