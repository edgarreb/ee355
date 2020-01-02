// Name: Edgar Martinez 
// Email: edgarmar@usc.edu

/* wtihout deallocating memory */

#include <iostream> 
using namespace std;

int main() 
{
	
	// allocating memory 	

	int* p = NULL; 
	cout << "p should be pointing to NULL: " << p << endl;

	cout << "p will now point to a memory location that is dynamically allocated: ";
	p = new int(25);
	cout << p << endl;
	cout << "*p: " << *p << endl;
	
	*p = 100;
	cout << "updated *p: " << *p << endl;

	// allocating memory blocks 

	int* p1 = NULL; 
	cout << "p1 is pointing to: " << p1 << endl;
	
	p1 = new int[3];
	// p1 is now pointing to the first address of the block of memory that was allocated
	cout << "p1 is pointing to: " << p1 << endl;
	p1[0] = 100;
	p1[1] = 200;
	p1[2] = 300;

	cout << "*p1: " << *p1 << endl; 
	cout << "move to the next location in memory" << endl;
	p1++;
	cout << "*p1: " << *p1 << endl; 
	cout << "move to the next location in memory" << endl; 
	p1++;
	cout << "*p1: " << *p1 << endl;

	return 0;
}
