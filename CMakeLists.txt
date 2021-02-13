cmake_minimum_required(VERSION 3.17)
project(DSA)

set(CMAKE_CXX_STANDARD 14)

add_executable(DSA
        Algorithms/LinearSearch/linearSearch.cpp
        Algorithms/LinearSearch/linearSearchWorstCase.cpp
        DataStructures/LinkedList/phone-book.cpp
        DataStructures/LinkedList/singly-linked-list.cpp
        DataStructures/Stack/stack.cpp Algorithms/MergeSort/MergeSort.cpp)
