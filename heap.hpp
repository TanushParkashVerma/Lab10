//
// Created by tanus on 2019-12-02.
//

#ifndef LAB10_HEAP_HPP
#define LAB10_HEAP_HPP

#include <algorithm>
#include <deque>
#include <iostream>

using namespace std;

/*Template heap class */
template<typename T>
class heap {
private:
    /*Heap container to store data.*/
    deque<T> data_container;

    /*method that ensures elements in heap are in heap form */
    void heapify() {
        make_heap(data_container.begin(), data_container.end());
    };

public:
    /*constructor that accepts STL sequence of elements and
     * copies them to your heap.*/
    template<template<typename...> class STL, typename... ARGUMENTS>
    heap(STL<T, ARGUMENTS...> container) {
        for (auto elementData : container) {
            data_container.push_back(elementData);
        }
        heapify();
    }

    /*A method called push which accepts an element and
     * pushes it into the heap.*/
    template<typename element_type>
    void push(element_type elementData) {
        data_container.push_back(elementData);
        push_heap(data_container.begin(), data_container.end());
        heapify();
    }

    /*A method called pop which accepts no parameters and removes and
     * returns the root(max) element from the heap. */
    auto pop() {
        auto maxElement = data_container.front();
        data_container.pop_front();
        pop_heap(data_container.begin(), data_container.end());
        heapify();
        return maxElement;
    };

    /*method that returns number of elements in heap */
    int size() {
        return data_container.size();
    };

    /*method called is_empty which returns true if the heap is empty, else false..*/
    bool is_empty() {
        return data_container.empty();
    }

    /*method called clear( ) which delete the elements in the heap,
     * ensuring no memory leaks remain. */
    void clear() {
        data_container.clear();
    }

    /*overloaded insertion operator to print the heap to standard output. */
    friend ostream &operator<<(ostream &out, const heap &heap) {
        for (auto &element : heap.data_container) {
            out << element << " ";
        }
        return out;
    }
};


#endif //LAB10_HEAP_HPP
