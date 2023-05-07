cmake_minimum_required(VERSION 3.24)
project(DataStructure C)

set(CMAKE_C_STANDARD 11)

#add_executable(Test Test.c)

#add_executable(DataStructure list/array/ListMain.c list/array/ArrayList.c list/point/Pointer.c)

#add_executable(Pointer list/point/PointListMain.c list/point/Pointer.c list/array/ArrayList.c)

#add_executable(Namecard list/namecard/NameCardMain.c list/namecard/NameCard.c list/array/ArrayList.c)

add_executable(SLink list/slinked/DLinkedListMain.c list/slinked/DLinkedList.c)

#add_executable(MyList list/mylist/MyListMain.c list/mylist/MyArrayList.c)