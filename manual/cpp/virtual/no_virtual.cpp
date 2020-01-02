// Name: Edgar Martinez 
// Email: edgarmar@usc.edu

#include <iostream>
using namespace std;

class parent 
{
	public: 
	void print() 
	{
		cout << "parent print()" << endl;
	}
};

class child : public parent
{
	public: 
	void print() 
	{
		cout << "child print()" << endl;
	}	
};

int main() 
{
	parent p1;
	child c1;

	parent* ptr = NULL;
	ptr = &p1;

	// this will use the print() method in the parent class
	ptr->print();

	
	// this will also use the print() method on the parent class 
	ptr = &c1;
	ptr->print();

	return 0; 
}
