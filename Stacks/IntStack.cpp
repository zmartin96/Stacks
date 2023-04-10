#include "intstack.h" 
//************************************
// Constructor                       *
//************************************
IntStack::IntStack(int capacity)
{
   stackArray = make_unique<int[]>(capacity);
   this->capacity = capacity;
   top = 0;
}

//***********************************
// Adds a value to the stack        *
//***********************************
void IntStack::push(int value)
{
   if (isFull()) throw IntStack::Overflow();
   stackArray[top] = value;
   top++;
}

//****************************************
// Determines whether the stack is empty *
//****************************************
bool IntStack::isEmpty() const
{
   return top == 0;
}

//****************************************
// Determines whether the stack is full  *
//****************************************
bool IntStack::isFull() const
{
	return top == capacity;
}

//************************************************
// Removes a value from the stack and returns it *
//************************************************
void IntStack::pop(int &value)
{
   if (isEmpty()) throw IntStack::Underflow();
   top--;
   value = stackArray[top];
}