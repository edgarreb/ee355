#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string func(string str1, string str2)
{
        string res = str1 + str2;
	transform(res.begin(), res.end(), res.begin(), tolower);
	
};

int main()
{
	string fname = "Edgar Roy";
	string lname = "Martinez";
	func(fname, lname);

}
