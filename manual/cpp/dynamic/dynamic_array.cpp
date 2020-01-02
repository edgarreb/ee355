// Name: Edgar Martinez
// Email: edggarmar@usc.edu

#include <iostream> 
using namespace std;

int main() 
{
	
	// allocate a one-dimensional array of size three 
	int size = 3;
	int* p = NULL; 
	p = new int[size]; 

	// fill the array 
	for(int i = 0;  i < size; i++) {
		p[i] = i;
	}

	// ouput the array 
	for(int i = 0; i < size; i++) {
		cout << p[i] << endl; 
	}
	
	// deallocate the array 
	delete [] p;

	
	// allocate a two-dimensional 3x2 array of ints 
	int** ptr = new int* [3];
	for(int i = 0; i < 3; i++) {
		ptr[i] = new int [2];
	}

	// fill the array 
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 2; j++) {
			ptr[i][j] = i + j;
			cout << ptr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
