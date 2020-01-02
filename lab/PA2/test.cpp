#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string codeName(string str1, string str2)
{
	string str3 = str1 + str2;
	str3.erase(remove(str3.begin(), str3.end(), ' '),str3.end());
	transform(str3.begin(), str3.end(), str3.begin(), ::tolower);

	return str3;
}

void func1(std::ofstream& file, string filename) 
{
	
	file.open(filename, std::ios::out | std::ios::app);
	file << "testing" << endl;
	file.close();

}

int main()
{

//	string fname = "Edgar Rogelio ";
//	string lname = "Martinez";
//	codeName(fname, lname);

	ofstream output;
	func1(output, "testfile.txt");
	func1(output, "testfile.txt");

	return 0;
}
