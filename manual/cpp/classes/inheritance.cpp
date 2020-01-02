// Name: Edgar Martinez
// Email: Edgar Martinez

#include <iostream> 
#include <string> 

using namespace std;

class person {
	public: 
	// members	
	int age; 
	string name;
	string gender;

	public:
	// methods
	void print_name() {
		cout << "person class: " << name << endl; 
	}

	void print_age() {
		cout << "person class: " << age << endl;
	}
	
	void print_gender() {
		cout << "person class: " << gender << endl; 
	}
};

// the "child" class inherits everything that is inside of the person class
// meaning that the child class has acesss to all of the public mehtods, and 
// members of "person". 

class child : public person {
	public: 
	// memebers
	string fav_movie; 
	string fav_food; 

	public:
	// methods
	void print_fav_movie() {
		cout << "child class: " << fav_movie << endl; 
	}
	
	void print_fav_food() {
		cout << "child class: " << fav_food << endl; 
	}
};

// the "adult" class inherits everything from the "child" class. Since the 
// "child" class inherited from the "person" class, the "adult" class has access 
// to everything inside of both the "child" class and the "person" class. 

class adult : public child {
	public: 
	//members
	string address; 
	string phone_number; 
	
	public:
	void print_address() {
		cout << "adult class: " << address << endl; 
	}

	void print_phone_number() {
		cout << "adult class: " << phone_number << endl; 
	}
};

int main() 
{
 	
	child dad; 
	
	// all these are from the "person" class, we can access them since 
	// the "child" class inherits from the "person" class. 
	dad.age = 42;
	dad.name = "Roy";
	dad.gender = "male";
 
	dad.print_name(); 
	dad.print_gender();

	// these methods and members are from the child class
	dad.fav_movie = "Titanic"; 
	dad.fav_food = "BBQ"; 

	dad.print_fav_movie();
	dad.print_fav_food(); 

	cout << "double inheritance case: " << endl; 
	

	adult mom; 
	// all of these members/methods are form the person class.
	mom.age = 39; 
	mom.name = "Rosario";
	mom.print_name();
	mom.print_age();

	// all of these members/methods are from the child class 
	mom.fav_movie = "Titanic";
	mom.print_fav_movie();

	// these are from the "adult" class. 
	mom.address = "2733 Double O Rd";
	mom.print_address();

	return 0;
}
