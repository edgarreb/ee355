// Name: Edgar Martinez
// Email: edgarmar@usc.edu

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main() 
{
	ifstream input_file;
	input_file.open("connection_template.txt");

	string temp;
	getline (input_file, temp);

	cout << temp << endl;

	getline(input_file, temp);
	cout << temp << endl;

	input_file.close();

	return 0;	
}
