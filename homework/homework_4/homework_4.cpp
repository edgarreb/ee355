// Name: Edgar Martinez
// Email: edgarmar@usc.edu

/*
An example of when you would want to allocate a four-dimensional array dynamically could be in a scenario in which you have to model the temperature of (square) room. In which case you do not know the dimesnions of the room before hand. It was mentioned during lecture as well that companies use pointers of high order to confuse hackers/people trying to steal their code implementation. */

#include <iostream> 
using namespace std;

int main() 
{
	
	const int h = 3; 
	const int w = 3;
	const int d = 3;
	const int e = 3; 

	// allocation 
	int**** ptr = NULL;

	ptr = new int***[h];
	 
	for(int i = 0; i < h; i++) {
		ptr[i] = new int**[w];
		
		for(int j = 0; j < w; j++) {
			ptr[i][j] = new int*[d]; 

			for(int k = 0; k < d; k++) {
				ptr[i][j][k] = new int[e];
			}
		}
	}
	
	// you can fill the array with whatever values at this point

	// deallocation 
	for(int i = 0; i < h; i++) {	
	
		for(int j = 0; j < w; j++) {
			
			for(int k = 0; k < d; k++) {
				delete [] ptr[i][j][k];
			}
		
		delete [] ptr[i][j];
		
		}
		
		delete [] ptr[i];
	}
	
	delete [] ptr; 

	return 0; 
}
