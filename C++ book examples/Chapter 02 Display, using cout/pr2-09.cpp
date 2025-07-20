// This program has variables of several of the integer types.
#include <iostream>
using namespace std;

int main()
{
   int checking;
   unsigned int miles;
   long diameter;

   checking = -20;
   miles = 4276;
   diameter = 100000;
   
   cout << "We have made a journey of " << miles << " miles.\n";
   cout << "Our checking account balance is " << checking << " dollars.\n";
   cout << "The Milky Way galaxy is about " << diameter; 
   cout << " light years in diameter.\n";
   return 0;
}