#include <iostream>
using namespace std;
 
// function declaration
void swap(int x, int y);
int main ()
{
   // local variable declaration:
  
   int a = 100;
   int b = 200;
  
 cout << "Before swap, value of a :" << a << endl;
   cout << "Before swap, value of b :" << b << endl;

   // calling a function to swap the values.
   swap(a, b);
 
   cout << "After swap, value of a :" << a << endl;
   cout << "After swap, value of b :" << b << endl;
 
   return 0;
}

// function definition to swap the values.
void swap(int x, int y)
{
   int temp;
   
   cout << "Before swap in method, value of a :" << x << endl;
   cout << "Before swap in method, value of b :" << y << endl;

   temp = x; /* save the value of x */
   x = y;    /* put y into x */
   y = temp; /* put x into y */
 
   cout << "After swap in method, value of a :" << x << endl;
   cout << "After swap in method, value of b :" << y << endl;
  

}

