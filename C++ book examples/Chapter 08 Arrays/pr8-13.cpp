// This program uses a string holding letters of the alphabet. One by one
// each letter is displayed with its ASCII code. The program demonstrates
// how a subscript can be used to access individual characters of a string.
#include <iostream>
#include <string>
using namespace std;

int main()
{
   string letters = "abcABC";
   char theLetter;
   int numChars = letters.length();
   int theCode;
   
   // Print Table heading
   cout << "Letter Code \n";
   cout << "----------- \n";
   
   for (int pos = 0; pos < numChars; pos++)
   {
      theLetter = letters[pos];
      theCode = static_cast<int>(theLetter);
      cout << "  " << theLetter << "     " << theCode << endl;
   }
   return 0;
}
    