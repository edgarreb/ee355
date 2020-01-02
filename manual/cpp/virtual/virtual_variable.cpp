// Name: Edgar Martinez 
// Email: edgarmar@usc.edu

#include <iostream>

using namespace std;

class parent 
{
	public: 

	int x;

	public:
	
	void print() 
	{
		cout << "parent print(), x: " << x << endl;
	}
};

class child : public parent 
{
	public: 

	int x;

	public:

	void print() 
	{
		cout << "child print(), x: " << x << endl;
	}
};

int main() 
{

	parent p_object;	
	child c_object;

	parent* ptr = NULL;
	ptr = &p_object;

	ptr->x = 100;
	ptr->print();

	ptr = &c_object;
	ptr->x = 200;
	ptr->print();

	return 0;
}
