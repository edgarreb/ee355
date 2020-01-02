// Name: Edgar Martinez
// Email: edgarmar@usc.edu
// Source Code: constructor.cpp

```````````````````````````````````````````````````````````````````````````````````

Constructors are a special type of method inside of a class. The constructor has no return type, and has the same name as the class itself. Constructors are called whenever we instantiate an instance of a class. Constructors can be used to initialize members of a class whenever a new object of the class is created. Just like functions we can overload the constructor.

```````````````````````````````````````````````````````````````````````````````````

Constructor:

Syntax:

class class_name 
{	
	public:
	int x;

	public:
	void print() 
	{
		cout << x << endl;
	}

	class_name() 
	{
		// this constructor will initialize x to 0
		x = 0;
	}
};

```````````````````````````````````````````````````````````````````````````````````

Note:

Every class has a constructor by default. The default constructor for a class does nothing. 

class name 
{
	public:
	int x;

	public:
	void print()
	{
		cout << x << endl;
	}

	// this is what the default constructor looks like 
	name()
	{
		// it's empty, it does nothing. 
	}
};

```````````````````````````````````````````````````````````````````````````````````
