#ifndef CUSTOM_STACK_H
#define CUSTOM_STACK_H

#include <iostream>
#include <new> 
#include <cstdlib>



template<typename T>
class CustomStack {
private:
    T* myArray;
    int myCapacity;
    int myTop;

public:
    CustomStack(int numElements = 100);
    ~CustomStack();
    bool empty() const;
    void push(const T& value);
    T top() const;
    void pop();
};



template<typename T>
CustomStack<T>::CustomStack(int numElements) : myTop(-1) {
    if (numElements <= 0) {
        std::cerr << "Error: Negative or zero capacity required -- terminating execution\n";
        exit(1);
    }
    myCapacity = numElements;
    myArray = new (std::nothrow) T[myCapacity];
    if (myArray == nullptr) {
        std::cerr << "Error: Inadequate memory to allocate stack -- terminating execution\n";
        exit(1);
    }
}

template<typename T>
CustomStack<T>::~CustomStack() {
    delete[] myArray;
}

template<typename T>
bool CustomStack<T>::empty() const {
    return myTop == -1;
}

template<typename T>
void CustomStack<T>::push(const T& value) {
    if (myTop >= myCapacity - 1) {
        std::cerr << "Stack-full! " << std::endl;
        exit(1);
    }
    myArray[++myTop] = value;
}

template<typename T>
T CustomStack<T>::top() const {
    if (!empty())
        return myArray[myTop];
    else {
        std::cerr << "Stack Empty -- Returning garbage." << std::endl;
        return T(); 
    }
}

template<typename T>
void CustomStack<T>::pop() {
    if (!empty())
        myTop--;
    else {
        std::cerr << "Stack Empty!" << std::endl;
    }
}

#endif 