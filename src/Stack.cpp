#include "Stack.h"
#include <iostream>

Stack::Stack(int initialSize) {
  theStack = new int[initialSize];
  top = 0;
  fullSize = initialSize;
}

Stack::~Stack() {
  delete[] theStack;
}

void Stack::push(int value) {
  //if theStack is full
  // create new stack twice as big
  // copy all elements to new stack
  // delete old stack
  // point old stack pointer to new stack
 int* stemp = theStack;
 if(top >= fullSize) {
   theStack = new int[fullSize * 2];
     for(int i = 0; i < top; i++) {
      theStack[i] = stemp[i];
	}
	delete[] stemp;
	fullSize = fullSize * 2;
}

 theStack[top] = value;
  top++;
}

int Stack::pop() {
  top--;
  return theStack[top];
}

int Stack::peek() {
  return theStack[top-1];
}

int Stack::size() {
  return top;
}
