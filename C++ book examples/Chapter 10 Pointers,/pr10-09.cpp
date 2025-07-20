// This program uses a pointer to display 
// the contents of an array. 
#include <iostream>
using namespace std;

int main()
{
   const int SIZE = 8;
   int numbers[ ] = {5, 10, 15, 20, 25, 30, 35, 40};
   int *numPtr;   // Pointer   

   // Make numPtr point to the numbers array.
   numPtr = numbers;
	
   // Use the pointer to display the array elements
   cout << "The numbers in the array are:\n";
   for (int index = 0; index < SIZE; index++)
   {
     cout << *numPtr << " ";
     numPtr++;
   }
	
   // Display the array elements in reverse order
   cout << "\nThe numbers in reverse order are:\n";
   for (int index = 0; index < SIZE; index++)
   {
      numPtr--;
      cout << *numPtr << " ";
   }
   return 0;
}