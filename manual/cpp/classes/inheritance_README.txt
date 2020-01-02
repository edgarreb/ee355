// Name: Edgar Martinez
// Email: edgarmar@usc.edu
// Source Code: inheritance.cpp

```````````````````````````````````````````````````````````````````````````````````
Inheritance is used to access methods/members of other classses. There is a simple example inside of the inheritance.cpp source code file. It walks you through how inheritance works when a "child" class is inheriting from a "parent" class. It also explains how inheritance works when a derived class inherits from a class that had previously inherited from another class. 

```````````````````````````````````````````````````````````````````````````````````

Inheritance:

When a derived class inherits from a superclass, the derived class will only inherit the public methods/members of the super class. The derived class will not have access to the superclasses private methods/members.

Syntax:

class name_of_class : public name_of_class_to_inherit_from {
	// methods and member of name_of_class class
};


Example:

class super_class {
	public:
	int x;
	int y; 
	
	public:
	void print_x() {
		cout << x << endl;
	}

	void print_y() {
		cout << y << endl;	
	}
};

class derived : public super_class {
	public:
	int z;
	int v; 

	public: 
	void print_z() {
		cout << z << endl;
	}

	void print_v() {
		cout << v << endl; 
	}
	
};
