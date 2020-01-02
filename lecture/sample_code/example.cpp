// Name: Edgar Martinez 
// Email: edgarmar@usc.edu

#include <iostream> 

using namespace std; 

void swap(int* x, int* y) 
{
	int temp = *x; 
	*x = *y;
	*y = temp; 
}

int main()
{
	// we want to swap two values by using pass by reference 
	int x = 2;
	int y = 10; 
	cout << "initial values: \n";
	cout << "x: " << x << " " << "y: " << y << "\n"; 
	cout << "address of x and y insode of main(): \n"; 
	cout << "&x: " << &x << " " << "&y: " << &y << "\n";

	swap(&x, &y);
	cout << "values of x and y after swap(): \n";
	cout << "x: " << x << " " << "y: " << y << "\n";
	
	return 0;
}
