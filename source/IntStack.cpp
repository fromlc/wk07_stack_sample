//------------------------------------------------------------------------------
// IntStack.cpp : class definition/implementation
//------------------------------------------------------------------------------
#include "IntStack.h"

#include <iostream>

//------------------------------------------------------------------------------
// constructor : creates an empty stack to hold the specified number of ints
//------------------------------------------------------------------------------
IntStack::IntStack(int size)
{
    // allocate enough memory for requested stack size
    stackArray = new int[size];
    stackSize = size;

    // indicate stack is empty
    top = -1;
}

//------------------------------------------------------------------------------
// copy constructor
//------------------------------------------------------------------------------
IntStack::IntStack(const IntStack &rhs)
{
    // create the new stack array
    if (rhs.stackSize > 0)
        stackArray = new int[rhs.stackSize];
    else
        stackArray = nullptr;

    // copy the old stackSize attribute
    stackSize = rhs.stackSize;

    // copy the old stack contents.
    for (int count = 0; count < stackSize; count++)
        stackArray[count] = rhs.stackArray[count];

    // set the top of the stack
    top = rhs.top;
}

//------------------------------------------------------------------------------
// destructor
//------------------------------------------------------------------------------
IntStack::~IntStack() { delete[] stackArray; }

//------------------------------------------------------------------------------
// pushes passed value onto the stack
//------------------------------------------------------------------------------
void IntStack::push(int num)
{
    if (isFull())
    {
        std::cout << "Could not push " << num << ". The stack is full.\n";
        return;
    }

    // top is array location for 
    top++;
    stackArray[top] = num;
}

//------------------------------------------------------------------------------
// - pops the value at the top of the stack off
// - copies popped value into the reference parameter
//------------------------------------------------------------------------------
void IntStack::pop(int &num)
{
    if (isEmpty())
    {
        std::cout << "The stack is empty.\n";
        return;
    }

    num = stackArray[top];
    top--;
}

//------------------------------------------------------------------------------
// - copies the value at the top of the stack into the reference parameter
//------------------------------------------------------------------------------
void IntStack::peek(int &num)
{
    if (isEmpty())
    {
        std::cout << "The stack is empty.\n";
        return;
    }

    num = stackArray[top];
}

//------------------------------------------------------------------------------
// returns true if the stack is full, false otherwise
//------------------------------------------------------------------------------
bool IntStack::isFull() const { return (top == stackSize - 1) ? true : false; }

//------------------------------------------------------------------------------
// returns true if the stack is empty, false otherwise
//------------------------------------------------------------------------------
bool IntStack::isEmpty() const { return (top == -1) ? true : false; }
