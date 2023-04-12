//This program illustrates  IntStack exception handling. 
#include "intstack.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
   int size = 5;
   IntStack<string>  stack(size);
   //int values[] = { 5, 10, 15, 20, 25 };
   vector<string> values= { "hi","howdy","hello","hey","how's it going?"};
   string value;
   bool end = 0;
   while (end == 0)
   {
       try
       {
           //here:
           cout << "Pushing...\n";
           for (int k = 0; k < 5; k++)
           {
               cout << values[k] << "  ";
               stack.push(values[k]);
           }
           cout << "Popping...\n";
           for (int j = 0; j < 5; j++)
           {
               cout << values[j] << "  ";
               stack.pop(value);
           }

           cout << "\nPopping value after stack is full..";
           //stack.pop(value);
           cout << "\nYou should not see this!!";
           cout << endl;
           end = 1;
       }
       catch (IntStack<string>::Overflow)
       {
           cout << "\nAn Overflow exception occurred.\n";
           //goto here;
       }
       catch (IntStack<string>::Underflow)
       {
           cout << "\nAn Underflow exception occurred.\n";
       }
   }
   return 0;
}