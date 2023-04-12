#include <memory>
using namespace std;

template <class T>
class IntStack
{
   unique_ptr<T[]>stackArray;
   int capacity,top;
   
public:
   // Constructor 
   IntStack(int capacity);

   // Member functions
   void push(T value);
   void pop(T &value);
   bool isEmpty() const;
   bool isFull() const;

   // Stack Exceptions 
   class Overflow {};
   class Underflow {};
};

//************************************
// Constructor                       *
//************************************
template <class T>
IntStack<T>::IntStack(int capacity)
{
	stackArray = make_unique<T[]>(capacity);
	this->capacity = capacity;
	top = 0;
}

//***********************************
// Adds a value to the stack        *
//***********************************
template <class T>
void IntStack<T>::push(T value)
{
	if (isFull()) throw IntStack::Overflow();
	stackArray[top] = value;
	top++;
}

//****************************************
// Determines whether the stack is empty *
//****************************************
template <class T>
bool IntStack<T>::isEmpty() const
{
	return top == 0;
}

//****************************************
// Determines whether the stack is full  *
//****************************************
template <class T>
bool IntStack<T>::isFull() const
{
	return top == capacity;
}

//************************************************
// Removes a value from the stack and returns it *
//************************************************
template <class T>
void IntStack<T>::pop(T& value)
{
	if (isEmpty()) throw IntStack::Underflow();
	top--;
	value = stackArray[top];
}