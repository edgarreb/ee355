// Name: Edgar Martinez
// Email: edgarmar@usc.edu

#include <iostream>
#include <string> 
#include <fstream>

using namespace std;

int main()
{
	ifstream inputFile;
	inputFile.open("input.txt");

	// part a 
	const int size = 10;
	string arrayA[size];

	int index = 0; 
	for(int i = 0; i < size; i++) 
	{
		
		inputFile >> arrayA[i]; 

		if(arrayA[i] != "") 
		{
			cout << arrayA[i] << " ";
			index++;
		}
		else 	
		{
			break;
		}
	}
	
	cout << endl;
	inputFile.close();

	// part b
	ofstream outputFile;
	outputFile.open("outputB.txt");

	for(int i = (index-1); i >= 0; i--) 
	{
		outputFile << arrayA[i] << " ";
	}
	
	outputFile << endl;
	outputFile.close();

	// part c
	outputFile.open("outputC.txt");

	// find out how manny numbers we have
	const int numbSize = 10;
	string numbArray[numbSize] = {"0","1","2","3","4","5","6","7","8","9"};

	int numberCount = 0; 

	for(int i = 0; i < index; i++) 
	{
		string t = arrayA[i].substr(0,1);	

		for(int j = 0; j < numbSize; j++) 
		{
			if(t == numbArray[j])
			{	
				numberCount++;
			}
		}
	}

	// convert everything to lower case
	const int alphabetSize = 26;
	string upper[alphabetSize] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
	string lower[alphabetSize] = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};

	// count how many words we have that start with capital letters 
	int capitalCount = 0; 

	for(int i = 0; i < index; i++) 
	{
		string temp = arrayA[i].substr(0,1);

		for(int j = 0; j < alphabetSize; j++) 
		{
			if(temp == upper[j]) 
			{
				capitalCount++;
			}
		}
	}
	
	const int capitalSize = capitalCount; 
	string arrayB[capitalSize];
	int position = 0;

	// make lowercase 
	if(capitalCount > 0) 
	{
		for(int i = 0; i < index; i++) 
		{
			string temp = arrayA[i].substr(0,1);
	
			for(int j = 0; j < alphabetSize; j++) 
			{
				if(temp == upper[j]) 
				{	
					arrayA[i] = lower[j] + arrayA[i].substr(1,arrayA[i].length());
					arrayB[position] = arrayA[i];
					position++;
				}
			}
		}	
	}

	// do the sorting 
	for(int i = 0; i < index; i++)
	{
		for(int j = i+1; j < index; j++)
		{
			if(arrayA[i] > arrayA[j])
			{
				string temp = arrayA[i];
				arrayA[i] = arrayA[j]; 
				arrayA[j] = temp;
			}
		}
	}

	// convert the words we changed from uppercase back to upper case
	if(capitalCount > 0) 
	{
		for(int i = 0; i < capitalCount; i++) 
		{
			for(int j = 0; j < index; j++) 
			{
				if(arrayB[i] == arrayA[j])
				{
					string temp = arrayB[i].substr(0,1);

					for(int k = 0; k < alphabetSize; k++)
					{
						if(temp == lower[k])
						{
							arrayA[j] = upper[k] + arrayA[j].substr(1,arrayA[j].length());
						}
					}
				}
			}
		}
	}

	// write to the file  
	if(numberCount > 0) 
	{
		// arrayA[] has sotred numbers at the begining of the array followed by sorted strings
		// this for loop will print the sorted strings first 
		for(int i = numberCount; i < index; i++) 
		{
			outputFile << arrayA[i] << " ";
		}
	
		// this for loop will print the sorted numbers 
		for(int i = 0; i < numberCount; i++) 
		{
			outputFile << arrayA[i] << " ";
		}
	}
	else
	{
		for(int i = 0; i < index; i++)
		{
			outputFile << arrayA[i] << " ";
		}
	}
	
	outputFile << endl; 
	outputFile.close();

	return 0;
}
