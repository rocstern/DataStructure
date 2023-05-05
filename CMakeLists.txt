cmake_minimum_required(VERSION 3.24)
project(DataStructure C)

set(CMAKE_C_STANDARD 11)

add_executable(Test Test.c)

#add_executable(DataStructure linked_list/array_list/ListMain.c linked_list/array_list/ArrayList.c linked_list/point/Pointer.c)

add_executable(Pointer linked_list/point/PointListMain.c linked_list/point/Pointer.c linked_list/array_list/ArrayList.c)

add_executable(Namecard linked_list/namecard/NameCardMain.c linked_list/namecard/NameCard.c linked_list/array_list/ArrayList.c)