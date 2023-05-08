cmake_minimum_required(VERSION 3.24)
project(DataStructure C)

set(CMAKE_C_STANDARD 11)

add_executable(SLink list/slinked/DLinkedListMain.c list/slinked/MyLinkedList.c)
