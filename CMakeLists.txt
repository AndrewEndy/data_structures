cmake_minimum_required(VERSION 3.26)
project(data_structures)

set(CMAKE_CXX_STANDARD 23)

add_executable(data_structures main.cpp
        node/SingleNode.h
        Lists/SinglyLinkedList.cpp
        Lists/SinglyLinkedList.h
        node/DoubleNode.h
        Lists/DoubleLinkedList.cpp
        Lists/DoubleLinkedList.h)
