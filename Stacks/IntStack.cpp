//#include "intstack.h" 
////************************************
//// Constructor                       *
////************************************
//template <class T>
//IntStack<T>::IntStack(int capacity)
//{
//   stackArray = make_unique<int[]>(capacity);
//   this->capacity = capacity;
//   top = 0;
//}
//
////***********************************
//// Adds a value to the stack        *
////***********************************
//template <class T>
//void IntStack<T>::push(T value)
//{
//   if (isFull()) throw IntStack::Overflow();
//   stackArray[top] = value;
//   top++;
//}
//
////****************************************
//// Determines whether the stack is empty *
////****************************************
//template <class T>
//bool IntStack<T>::isEmpty() const
//{
//   return top == 0;
//}
//
////****************************************
//// Determines whether the stack is full  *
////****************************************
//template <class T>
//bool IntStack<T>::isFull() const
//{
//	return top == capacity;
//}
//
////************************************************
//// Removes a value from the stack and returns it *
////************************************************
//template <class T>
//void IntStack<T>::pop(T &value)
//{
//   if (isEmpty()) throw IntStack::Underflow();
//   top--;
//   value = stackArray[top];
//}