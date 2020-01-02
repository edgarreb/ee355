// Name: Edgar Martinez 
// Email: edgarmar@usc.edu

#include <iostream>
using namespace std;

int main() 
{

	// pointers have an address that they are allocated in memory. 
	// the contents of the memory that pointers are allocated is the memory 
	// location of the thing that they point to. 		

	int x = 100; 
	int* ptr; 

	cout << "initial addr that ptr is pointing to : " << ptr << endl; 
	ptr = &x; 

	cout << "ptr is now pointing to the addr of x" << endl;	

	cout << "x: " << x << endl;
	cout << "&x: " << &x << endl; 

	cout << "ptr: " << ptr << endl; 
	cout << "*ptr: " << *ptr << endl; 
	cout << "&ptr: " << &ptr << endl;

	int** ptr1;
	cout << "ptr1 initially points to " << ptr1 << endl;
	
	ptr1 = &ptr;
	cout << "ptr1 is now pointing to ptr" << endl; 
	
	cout << "ptr1: " << ptr1 << endl;
	cout << "*ptr1: " << *ptr1 << endl;
	

	return 0;
}
