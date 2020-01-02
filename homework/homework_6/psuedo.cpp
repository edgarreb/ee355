// Name: Edgar Martinez
// Email: edgarmar@usc.edu

#include <iostream>

using namespace std;

int main() 
{

	const int N = 8;
	double arrayA[N] = {1,2,3,4,5,6,7,8};

	/* 
	the count[] array will hold the number of values smaller (or less than) 
	any given entry in arrayA[].

	For example count[0] will hold an integer value that represents the total
	number of values in arrayA[] smaller than element arrayA[0].
	*/
	int count[N];


	// initialize all elements in count[] to 0

	// algorithm
	for(int i = 0; i < N; i++) 
	{
	
		// loop through the entire array and compare to a single element 
		// to find the amount of entries less than any given element
		for(int j = 0; j < N; j++) 
		{
			if(arrayA[j] < arrayA[i])
			{
				// increment the count[i] entry by one 
			{
		}	
	}


	/*
	print in the desired format, arrayA[i] is an entry, and count[i] is an 
	integer value that represents the amount of entries in the entire arrayA[]
	that are less than arrayA[i].
	*/

	return 0;
}
