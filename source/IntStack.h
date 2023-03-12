//------------------------------------------------------------------------------
// IntStack.h : class declaration/specification
//------------------------------------------------------------------------------
#ifndef INTSTACK_H
#define INTSTACK_H

//------------------------------------------------------------------------------
// IntStack
//------------------------------------------------------------------------------
class IntStack {
private:
    int* stackArray;  // Pointer to the stack array
    int stackSize;    // The stack size
    int top;          // Indicates the top of the stack

public:
    // constructor
    IntStack(int);

    // copy constructor
    IntStack(const IntStack&);

    // destructor
    ~IntStack();

    // stack operations
    void push(int);
    void pop(int&);
    bool isFull() const;
    bool isEmpty() const;
};
#endif 