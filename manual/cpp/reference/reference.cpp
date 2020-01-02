#include <iostream>

using namespace std;


int main() {

	int x = 100; 
	int& ref = x;

	// if we change the value of ref we will change the value of x
	// vice versa, if we change x, we change ref 

	x = 200;
		
	cout << "x: " << x << endl;
	cout << "ref: " << ref << endl;

	return 0;
}
