//------------------------------------------------------------------------------
// wk07_stack_sample.cpp
//
// Demos a stack of ints with the IntStack class
// 
// Author: Tony Gaddis, from Gaddis 9E pp. 1168-1171
// Modified by: Prof. Linda C
//------------------------------------------------------------------------------
#include "IntStack.h"

#include <iostream>

//------------------------------------------------------------------------------
// constants
//------------------------------------------------------------------------------
constexpr int NUM_VALUES = 5;

//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
int main()
{
    // define a stack object to hold 5 int values
    IntStack aStack(5);

    // push the values onto the stack
    std::cout << "\nPushing values onto the stack...\n";

    int value = 1;
    while (!aStack.isFull()) 
    {
        std::cout << "Pushing " << value << "\n";
        aStack.push(value++);
    }
    // pop the values off the stack
    std::cout << "\nPopping values off the stack...\n";

    // holds values popped off the stack
    int poppedValue;
    while (!aStack.isEmpty()) {
        aStack.pop(poppedValue);
        std::cout << "Popped " << poppedValue << '\n';
    }

    return 0;
}