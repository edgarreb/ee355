// Name: Edgar Martinez
// Email: edgarmar@usc.edu

#include <iostream>
#include <string>

using namespace std;

class entity 
{
	public: 
	int age;
	string name;

	public:

	void print_name()
	{	
		cout << name << endl;
	} 

	void print_age() 
	{
		cout << age << endl;
	}

	// the constructor will be called whenever we create a new object of this
	// class. the constructor has no return type, and has the same name as the
	// class. 

	entity ()
	{
		age = 0;
		name = "no name";
	}
	
	// we can overload the constructor, and give it arguments.
	entity(int Age, string Name)
	{
		age = Age;
		name = Name;
	}

};

int main() 
{

	entity e1;
	e1.print_name();
	e1.print_age();

	cout << "~~~~~~~~~~~~~" << endl;

	entity e2(22, "Edgar");
	e2.print_name();
	e2.print_age();
	return 0;
}
