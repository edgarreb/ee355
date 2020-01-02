// Name: Edgar Martinez
// Email: edgarmar@usc.edu

#include <iostream>

using namespace std;

int main() 
{
	
	const int N = 8;
	double arrayA[N] = {-1, 20, -3, 4, 9, 0, 45, 100};
	int count[N];
	
	// initialize the count[] to 0
	for(int i = 0; i < N; i++)
	{
		count[i] = 0;
	}

	// print out the array
	for(int i = 0; i < N; i++) 
	{
		cout << arrayA[i] << " ";
	}
	cout << endl;


	// algorithm
	for(int i = 0; i < N; i++) 
	{
		double temp = arrayA[i];
		
		for(int j = 0; j < N; j++)
		{
			if(arrayA[j] < temp)
			{
				count[i] = count[i] + 1;
			} 
		}
	} 

	// print out in the format specified 
	for(int i = 0; i < N; i++) 
	{
		cout << arrayA[i] << ":" << count[i] << "   "; 
	}
	cout << endl;

	return 0;
}		
