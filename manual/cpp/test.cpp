#include <iostream>

using namespace std;

class Person 
{

	public:
	// constructors don't have a return type 
		int age; 
		string name; 

		Person()
		{
			name = "Edgar";
			age = 23;
			cout << "Person Contructor:" << endl;
			cout << "Default name: " << name << endl;
			cout << "Default age: " << age << endl;
		}

	private: 
};

class Student 
{

	public:
	Student()
	{
		cout << "Student Constructor: " << endl;
	}

	private:

};

class Teacher : public Person , public Student
{

	public: 
	Teacher() 
	{
		cout << "Teacher Constructor: " << endl;
	}
	
	private: 
};

int main() 
{
	Person Edgar;

	cout << "------" << endl;

	/* When we create an instance of Teacher, the order of inheritance will determine the order of contructor calls */
	/* The Person constructor will be called first followed by the Student and then the Teacher constructor */
	Teacher Ruiz;	
}