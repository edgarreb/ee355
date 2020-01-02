// Name: Edgar Martinez 
// Email: edgarmar@usc.edu

#include <iostream>

using namespace std;

// function prototyping done here so that when we compile our two .cpp files 
// "main.cpp" doesn't throw an error for the add() function
int add(int x, int y);

int main()
{
	cout << "the sum of 3 and 4 is " << add(3,4) << endl;
	
	return 0;
}
