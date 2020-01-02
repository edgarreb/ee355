// Name: Edgar Martinez
// Email: edgarmar@usc.edu

#include <iostream>

using namespace std;

int main() 
{
	// address operator &, dereference operator * 

	int* ptr = NULL;
	int x = 100;
	ptr = &x;

	if(ptr == &x) 
	{
		cout << ptr << " == " << &x << endl;
	}
	if(*ptr == x) 
	{
		cout << *ptr << " == " << x << endl;
	}
	

	return 0;
}
