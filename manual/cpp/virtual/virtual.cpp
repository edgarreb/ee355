// Name: Edgar Martinez 
// Email: edgarmar@usc.edu

#include <iostream>

using namespace std;

class parent 
{
	public:
	
	virtual void print()
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

	parent mom;
	child kid;

	parent* ptr;
	ptr = &mom;

	// this will call the parent print() method 
	ptr->print();
	
	ptr = &kid;
	// this will call the child print() method 
	ptr->print();

	
	return 0;
}
