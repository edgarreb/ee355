#include <iostream>
#include <string>

using namespace std;

int main() 
{

	/*string name = "Edgar, Martinez";
	string f_name;
	string l_name;
	
	cout << "name: " << name << endl;
	cout << "find: " << name.find(",") << endl;

	f_name = name.substr(0,name.find(","));
	cout << "f_name: " << f_name << endl;
	
	l_name = name.substr(name.find(",") + 2);
	cout << "l_name: " << l_name << endl;*/

	string name = "network.db";

	cout << "name: " << name << endl;
	cout << "length(): " << name.length() << endl;

	
	cout << "substr(): " << name.substr(name.length() - 3) << endl;
	name = name.substr(name.length() - 3);

	if(name == ".db") 
	{
		cout << "this is a db file!" << endl;
	}
	
	return 0;
}
