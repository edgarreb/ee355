#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) 
{
	
	string filename1, filename2;

	if(argc != 3) 
	{
		cout << "Error: invalid argument" << endl;
		return 0;
	}
	else if(argc == 3) 
	{
		filename1 = argv[1];
		filename2 = argv[2];

		cout << filename1 << " " << filename2 << endl;
	}

	/* open the files */
	int count1 = 0;
	int count2 = 0;
	string input1[10];
	string input2[10];

	fstream inputfile;
	inputfile.open(filename1);
	
	int index = 0;
	while(inputfile.good())
	{
		inputfile >> input1[index];
		count1++;
		index++; 
	}

	for(int i = 0; i < count1; i++) 
	{
		cout << input1[i] << endl;
	}
	return 0;
}
