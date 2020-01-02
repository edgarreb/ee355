// Name: Edgar Martinez 
// Email: edgarmar@usc.edu

#include <iostream> 
#include <fstream>
#include <string>

using namespace std;

int main() 
{
	// ifstram is a class defined inside of "fstream" that helps us read 
	// from files. We will need to create an instance of ifstream, and use 
	// that object to read from files. 

	ifstream input; 

	// Inside of the ifstream class there are defined methods that will 
	// help us read from files. One example is the "open()" method, which
	// opens a file so that we can begin reading from it.

	input.open("input.txt");

	string str;

	while(input.good())
	{
		getline(input, str);
		cout << str << endl;
	}

	input.close();
	
	return 0;	
	
}
