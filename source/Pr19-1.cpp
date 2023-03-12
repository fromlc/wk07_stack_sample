//------------------------------------------------------------------------------
// Pr19-1.cpp
//
// Demos a stack of ints with the IntStack class
// 
// Author: Tony Gaddis, from Gaddis 9E pp. 1168-1171
// Modified by: Prof. Linda C
//------------------------------------------------------------------------------
#include "IntStack.h"

#include <iostream>
using std::cout;

//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
int main() {

   // to hold values popped off the stack
   int catchVar;

   // define a stack object to hold 5 int values
   IntStack stack(5);

   // push the values onto the stack
   cout << "Pushing 5\n";
   stack.push(5);

   cout << "Pushing 10\n";
   stack.push(10);

   cout << "Pushing 15\n";
   stack.push(15);

   cout << "Pushing 20\n";
   stack.push(20);

   cout << "Pushing 25\n";
   stack.push(25);

   // pop the values off the stack
   cout << "\nPopping...\n";
   stack.pop(catchVar);
   cout << catchVar << '\n';
   stack.pop(catchVar);
   cout << catchVar << '\n';
   stack.pop(catchVar);
   cout << catchVar << '\n';
   stack.pop(catchVar);
   cout << catchVar << '\n';
   stack.pop(catchVar);
   cout << catchVar << '\n';

   return 0;
}