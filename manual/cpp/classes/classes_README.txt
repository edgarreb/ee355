// Name: Edgar Martinez 
// Email: edgarmar@usc.edu
// Source Code: class.cpp

```````````````````````````````````````````````````````````````````````````````````
Classes are a way to group data and functions together. This style of coding is reffered to as Object-Oriented-Programming (OOP). This style of coding is useful because it helps us keep our code organized, especially if our source code has many lines of code. 

```````````````````````````````````````````````````````````````````````````````````

Defining a class: 

Classes are defined before main(). You can think of a class as a new data type. (don't forget the ; at the end of the class declaration). By default the class properties are set to private, if you want to access the class properties outside of the class itself you must make the properties public. 

Sytnax:

class class_name { 
	public:
	//properies of the class will go inside 
};

Example:

class parent {
	public:
	
	// memebers
	int age; 
	string name; 
	
	// methods 
	void print_name() {
		cout << name << endl; 
	}

	void print_age() {
		cout << age << endl; 
	}
};


```````````````````````````````````````````````````````````````````````````````````

Acessing class properties:

In order to access a classes properties they must be made public. This can be done by using the keyword "public:" inside of the class decleration. If you don't want users to access or change certian methods/members you can do so by using the keyword"private:". To access public properties you can simply use the objects name follwed by a "." and the property you wish to access. 

Syntax:

object_name.member;

object_name.method();


Example:

int main()
{
	parent dad; 
	dad.age = 43; 
	dad.name = "Roy";
	dad.print_age(); 
}

``````````````````````````````````````````````````````````````````````````````````

