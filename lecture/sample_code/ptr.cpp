// Name: Edgar Martinez 
// Email: edgarmar@usc.edu

#include <iostream> 

using namespace std; 

class parent 
{
	public: 
	int x; 
};

int main() 
{
	parent p1; 
	cout << "&p1: " << &p1 << endl; 
	
	parent* ptr; 
	ptr = &p1; 
	cout << "ptr: " << ptr << endl; 	
	
	p1.x = 10; 
	cout << "p1.x: " << p1.x << " " << "should be 10" << endl;
	

	return 0; 
}
