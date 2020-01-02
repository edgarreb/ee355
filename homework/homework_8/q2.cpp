#include <iostream>

using namespace std;

int& exampleb()
{
	static int x = 599;
	return x;
}


int main() 
{
//	exampleb() = 595;
	cout << exampleb() << endl;

	cout << "change the ref: " << endl;
	exampleb() = 100;
	cout << exampleb() << endl;

	return 0;
}
