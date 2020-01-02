// Name: Edgar Martinez 
// Email: edgarmar@usc.edu

#include <iostream> 

using namespace std;

struct movie 
{
	string title;
	int year; 
};

int main() 
{
	movie person1;

	cout << "person1: " << endl;
	cout << "what is your favorite movie ";
	cin >> person1.title;
	cout << "what year was the movie released ";
	cin >> person1.year;

	cout << "person1 favorite movie is " << person1.title << "." << endl;
	cout << "person1 favorite movie was made in the year " << person1.year << "." << endl;
 	
	return 0;
}
