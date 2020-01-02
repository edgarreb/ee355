// Name: Edgar Martinez 
// Email: edgarmar@usc.edu

#include <iostream> 

using namespace std;

int main() 
{
	cout << "HELLO!" << endl; 
	int val = 355; 
	int* ptr;
	
	ptr = &val; 
	cout << "val: " << val << endl; 
	cout << "&val: " << &val << endl; 
	cout << "ptr: " << ptr << endl; 
	cout << "&ptr: " << &ptr << endl; 
	cout << "*ptr: " << *ptr << endl;
	cout << "&(*ptr): " << &(*ptr) << endl;

	cout << "siseof(int): " << sizeof(val) << endl;
	double x = 10.0; 
	cout << "sizeof(double): " << sizeof(x) << endl;	

	cout << "-----------" << endl; 

	int i = 10; 
	int* ptr2; 
	int** ptr3; 
	
	ptr2 = &i;
	ptr3 = &ptr2; 

	cout << "i: " << i << endl;
	cout << "&i: " << &i << endl; 
	cout << "ptr2: " << ptr2 << endl;
	cout << "&ptr2: " << &ptr2 << endl;
	cout << "ptr3: " << ptr3 << endl;
	cout << "*ptr3: " << *ptr3 << endl;

	char word[3] = {'n', 'o', 't'};
	char* char_ptr; 
	char_ptr = word; 
	cout << "&char_ptr: " << &char_ptr << endl; 
	cout << "char_ptr: " << char_ptr << endl;	

	return 0; 
}
