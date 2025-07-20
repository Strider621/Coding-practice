// This program uses relational operators to compare a string
// entered by the user with valid part numbers.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
   const double PRICE_A = 249.0,  // Price for item A
                PRICE_B = 199.0;  // Price for item B

   string partNum;                // Holds an item number

   // Display available items and get the user's selection
   cout << "The headphone item numbers are \n"
        << "  Noise canceling: item number S-29A \n"
        << "  Wireless: item number S-29B \n\n"
        << "Enter the item number of the headphones \n"
        << "you wish to purchase: ";
   cin  >> partNum;

   // Set the numeric output formatting
   cout << fixed << showpoint << setprecision(2);

   // Determine and display the correct price
   // Accept upper or lower case user input
   if (partNum == "S-29A" || partNum == "s-29a")
      cout << "The price is $" << PRICE_A << endl;
   else if (partNum == "S-29B" || partNum == "s-29b")
      cout << "The price is $" << PRICE_B << endl;
   else
      cout << partNum << " is not a valid part number.\n";
   return 0;
}