#include <iostream>
#include <string>

using namespace std;

void compare (string x, string y) 
{
	if(x > y) 
	{
		cout << x << " > " << y << endl;
	}
	else 
	{
		cout << y << " > " << x << endl;
	}
}

int main() 
{
	string str1 = "a";
	string str2 = "T";

	compare(str1, str2);

	string test = "test";
	cout << test << " strlen(): " << test.length() << endl;
	
	cout << 	
	return 0;
}
