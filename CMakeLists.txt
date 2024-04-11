cmake_minimum_required(VERSION 3.26)
project(data_structures)

set(CMAKE_CXX_STANDARD 23)

add_executable(data_structures main.cpp
        node/SingleNode.h
        Lists/SinglyLinkedList.cpp
        Lists/SinglyLinkedList.h
        node/DoubleNode.h
        Lists/DoubleLinkedList.cpp
        Lists/DoubleLinkedList.h
        node/QueueNoda.h
        Lists/Queue.cpp
        Lists/Queue.h
        Lists/InputRestrictedQueue.cpp
        Lists/InputRestrictedQueue.h
        node/StackNode.h
        Lists/Stack.cpp
        Lists/Stack.h
        Lists/QueueOnMassifs.cpp
        Lists/QueueOnMassifs.h
        Lists/InputRestrictedQueueOnMassifs.cpp
        Lists/InputRestrictedQueueOnMassifs.h
        Lists/StackOnMassifs.cpp
        Lists/StackOnMassifs.h)
