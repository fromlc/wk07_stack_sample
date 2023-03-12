//------------------------------------------------------------------------------
// IntStack.cpp : class definition/implementation
//------------------------------------------------------------------------------
#include "IntStack.h"

#include <iostream>
using std::cout;

//------------------------------------------------------------------------------
// constructor : creates an empty stack to hod the specified number of ints
//------------------------------------------------------------------------------
IntStack::IntStack(int size) {

    stackArray = new int[size];
    stackSize = size;
    top = -1;
}

//------------------------------------------------------------------------------
// copy constructor
//------------------------------------------------------------------------------
IntStack::IntStack(const IntStack& obj) {

    // create the new stack array
    if (obj.stackSize > 0)
        stackArray = new int[obj.stackSize];
    else
        stackArray = nullptr;

    // copy the old stackSize attribute
    stackSize = obj.stackSize;

    // copy the old stack contents.
    for (int count = 0; count < stackSize; count++)
        stackArray[count] = obj.stackArray[count];

    // set the top of the stack
    top = obj.top;
}

//------------------------------------------------------------------------------
// destructor
//------------------------------------------------------------------------------
IntStack::~IntStack() { delete[] stackArray; }

//------------------------------------------------------------------------------
// pushes passed value onto the stack
//------------------------------------------------------------------------------
void IntStack::push(int num) {

    if (isFull()) {
        cout << "The stack is full.\n";
        return;
    }

    top++;
    stackArray[top] = num;
}

//------------------------------------------------------------------------------
// - pops the value at the top of the stack off
// - copies popped value it into the reference parameter
//------------------------------------------------------------------------------
void IntStack::pop(int& num) {

    if (isEmpty()) {
        cout << "The stack is empty.\n";
        return;
    }

    num = stackArray[top];
    top--;
}

//------------------------------------------------------------------------------
// returns true if the stack is full, false otherwise
//------------------------------------------------------------------------------
bool IntStack::isFull() const { return (top == stackSize - 1) ? true : false; }

//------------------------------------------------------------------------------
// returns true if the stack is empty, false otherwise
//------------------------------------------------------------------------------
bool IntStack::isEmpty() const { return (top == -1) ? true : false; }
