// This program prints its environment variables 
#include <iostream>
using namespace std;

int main(int argc, char ** argv)
{
	extern char ** environ; // Needed to access the environment

	int k = 0;
	while (environ[k] != 0)
	{
		// Print the string
		cout <<  environ[k] << "\n";
		k++;
	}
	return 0;
}