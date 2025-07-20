/* This program uses the "enhanced" bubble sort algorithm to sort an array
of Inventory objects in ascending order by their itemCode. Once no swaps 
occur on a pass, the algorithm recognizes that the array is fully sorted, 
so the outer loop is exited to prevent unneeded additional iterations. 
*/ 
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
  
// Inventory class declaration
class Inventory
{   private:
      string itemCode;
      string description;
      double price;
      
   public:
      Inventory()                             // Default constructor
      {  itemCode = "XXX";  description = " ";  price = 0.0; }
      
      Inventory(string c, string d, double p) // 3 argument constructor
      {  itemCode = c;
         description = d;
         price = p;
      }
      
      // Add methods setCode, setDescription, and setPrice here.
   
      // Functions to retrieve member variable values
      string getCode() const
      {  string code = itemCode;
         return code;
      }
      
      string getDescription() const
      {  string d = description;
         return d;
      }
      
      double getPrice() const
      {  return price;
      }
      
}; // End Inventory class declaration

// PROGRAM THAT USES THE INVENTORY CLASS

// Function prototypes
void displayInventory(const Inventory[], int);
void bubbleSort(Inventory[], int);

/*******************************************************
 *                      main                           *
 *******************************************************/
int main()
{
   const int SIZE = 6;
   
   // Create and initialize the array of Inventory objects
   Inventory silverware[SIZE] =
                             { Inventory("S15", "soup spoon",  2.35),
                               Inventory("S12", "teaspoon",    2.19),
                               Inventory("F15", "dinner fork", 3.19),
                               Inventory("F09", "salad fork" , 2.25),
                               Inventory("K33", "knife",       2.35), 
                               Inventory("K41", "steak knife", 4.15) };
                               
   // Display the inventory
   cout << "Here is the original data\n";
   displayInventory(silverware, SIZE);
   
   // Sort the objects by their itemCode
   bubbleSort(silverware, SIZE);
   
   // Display the inventory again
   cout << "\nHere is the sorted data\n";
   displayInventory(silverware, SIZE);

   return 0;
} // End main                            
                               
/*******************************************************
 *               displayInventory                      *
 * This function displays the entire array.            *
 *******************************************************/
void displayInventory(const Inventory object[], int size)
{  
   for (int index = 0; index < size; index++)
   {  cout << setw(5)  << left  << object[index].getCode() 
           << setw(13) << left  << object[index].getDescription()
           << "$"      << right << object[index].getPrice() << endl;
   }
} // End displayInventory

/*********************************************************
 *                      bubbleSort                       *
 * This function performs a bubble sort on Inventory     *
 * objects, arranging them in ascending order by their   *
 * itemCode. Note that when the itemCodes of two objects * 
 * are out of order, the entire two objects are swapped. *
 *********************************************************/
void bubbleSort(Inventory array[], int size)
{
   bool madeAswap = true;      // This allows the for loop to begin iterating

   for (int maxElement = size - 1; maxElement > 0 && madeAswap; maxElement--)
   {  
      madeAswap = false;       // No swaps have occurred yet on this pass
      
      for (int index = 0; index < maxElement; index++)
      {
         if (array[index].getCode() > array[index + 1].getCode())
         {
             swap(array[index], array[index + 1]);
             madeAswap = true;
         }
      }
   } 
} // End bubbleSort

/***************************************************
 *                         swap                    *
 * This function swaps objects a and b in memory.  * 
 ***************************************************/
 void swap(Inventory &a, Inventory &b)
{
   Inventory temp = a;
   a = b;
   b = temp;
}
