#include <iostream>

using namespace std;

class base 
{
	public:
	//int x;	
	virtual void set_x(int a)
	{
		x = a;
	}
	virtual void print_x()
	{
		cout << "x: " << x << endl;	
	}

	protected:
	int x;
	private:
	//int x;
};

class derived : public base
{
	public:
	void set_x(int b)
	{
		cout << "derived" << endl;
		x = b;
	}
	void print_x()
	{
		cout << "derived" << endl;
		cout << "x: " << x << endl;
	}
};

int main()
{
	base* ptr = NULL;
	ptr = new base;
	ptr->set_x(10);
	ptr->print_x();

	cout << "testing" << endl;

	ptr = new derived;
	ptr->set_x(100);
	ptr->print_x();

	return 0;
}
