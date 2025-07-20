// This program is a driver for testing the showFees function.
#include <iostream>
using namespace std;

// Function Prototype
void showFees(string category, double rate, int months);

int main()
{
   // Constants for monthly membership rates
   const double ADULT_RATE  = 120.0,
                CHILD_RATE  =  60.0,
                SENIOR_RATE = 100.0;
   
   // Perform a test for adult membership
   showFees("Adult", ADULT_RATE, 3); 
      
   // Perform a test for child membership
   showFees("Child", CHILD_RATE, 2); 
       
   // Perform a test for senior citizen membership
   showFees("Senior", SENIOR_RATE, 4);

   return 0;
}

/************************************************************                 
*                         showFees                          *
* This function uses the membership type, montly rate and,  *
* number of months passed to it as arguments to compute and *
* display a member's total charges.                         *
//***********************************************************/
void showFees(string memberType, double rate, int months)
{
    cout << "\nThe function was called with arguments: "
         << memberType << ", " << rate << ", " << months << endl; 
    cout << "Total charges: $" << (rate * months) << endl;
}