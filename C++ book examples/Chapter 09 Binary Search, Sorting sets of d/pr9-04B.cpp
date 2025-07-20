/* This program demonstrates the enhanced bubble sort algorithm, which is used here
to sort an array of integers in ascending order. Once no swaps occur on a pass, the
algorithm recognizes that the array is fully sorted, so the outer loop is exited to
prevent unneeded additional iterations. The program also counts and displays the
number of passes needed to complete the sort.
*/ 
#include <iostream>
using namespace std;

// Function prototypes
int bubbleSort(int[], int);
void swap(int &, int &);

int main()
{
   const int SIZE = 6;
   int numPasses;

   // Array of unsorted values
   int values[SIZE] = { 6, 1, 3, 2, 4, 5 };

   // Display the unsorted array
   cout << "The unsorted values:\n";
   for (int element : values)
      cout << element << " ";
   cout << endl;

   // Sort the array
   numPasses = bubbleSort(values, SIZE);

   // Display the sorted array and the number of passes
   cout << "The sorted values:\n";
   for (int element : values)
      cout << element << " ";
      
   cout << "\nNumber of passes: " << numPasses;

   return 0;
}

/********************************************************
 *                       bubbleSort                     *
 * This function sorts an int array in ascending order. *
 ********************************************************/
int bubbleSort(int array[], int size)
{  
   int numPasses = 0;
   bool madeAswap = true;      // This allows the for loop to begin iterating
   
   for (int maxElement = size - 1; maxElement > 0 && madeAswap; maxElement--)
   {  
      numPasses++;             // Count the pass
      madeAswap = false;       // No swaps have occurred yet on this pass
      
      for (int index = 0; index < maxElement; index++)
      {
         if (array[index] > array[index + 1])
         {    swap(array[index], array[index + 1]);
              madeAswap = true;
         }
      }
   }
   return numPasses;            // Let main know how many passes were needed
}

/****************************************
 *                 swap                 *
 * This function swaps the contents of  * 
 * int variables a and b in memory.     *
 ****************************************/
 void swap(int &a, int &b)
{
   int temp = a;
   a = b;
   b = temp;
}
