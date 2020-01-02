// Name: Edgar Martinez 
// Email: edgarmar@usc.edu

#include <iostream>
#include <string> 
#include <fstream>

using namespace std;

void permutation (int position, int max_length, int k, string temp) 
{
	int index = 0;
	
	for(int i = position; i < k + position; i++)
        {	
		cout << "i: " << i << endl;
		cout << "left: " << ((k + position) - i)  << endl;

		if(temp.length() < max_length)
		{
                	temp = temp.substr(0,i+index) + ":" + temp.substr(i+index,temp.length());
			
                	index++;

                	cout << "temp: " << temp << endl;
                	cout << "temp.length(): " << temp.length() << endl;
                	cout << "--------------------" << endl;
		}
		else 
		{
			cout << "break" << endl;
			break;
		}
        }

}

int main() 
{
	string s = "12345";
	int k = 2;

	cout << "initial info: " << endl;	
	cout << "s: " << s << endl;
	cout << "k: " << k << endl;

	//cout << "enter S2: "; 
	//	cin >> s;

	//cout << "enter K: ";
	//	cin >> k;

	/*
		say we have the string "123456" 
		the string has six characters, at most we can insert 5 : 
		the maximum number of : we can insert is always one less than 	
		the number of characters 
	*/

	string temp;
	string combinations [100];

	// this is the part of the string where we can insert ":" 
	int start = 1;
	int end = s.length() - 2;
	temp = s.substr(start, end); 
	
	// max_colon is the max number of colons that can be inserted to string
	// max_length is the max length possible after all colons were inserted
	const int max_colon = s.length() - 1;
	const int max_length = temp.length() + max_colon;

	cout << "max_length: " << max_length << endl;
	cout << "temp: " << temp << endl;
	cout << "temp.length(): " << temp.length() << endl;
	cout << "~~~~~~~~~~~~~~~~" << endl;

	int position = 0;
	int index = 0;

	permutation(position, max_length, k, temp);

	position = 3;
	permutation(position, max_length, k, temp);

	/*position = 2;
	permutation(position, max_length, k, temp);

	position = 3;
	permutation(position, max_length, k, temp);
	*/
	/*
	{
		temp = temp.substr(0,position+index) + ":" + temp.substr(position+index,temp.length());
		
		cout << "position: " << position << endl;
		
		position++;
		index++;	
	
		cout << "temp: " << temp << endl;
		cout << "temp.length(): " << temp.length() << endl;
		cout << "--------------------" << endl;	
	}*/	
	
	/*
	// add a colon at a certian position
	int position = 0;
	int ref = 0;
	
	cout << "position: " << position << endl;
	
	temp = temp.substr(0,position+ref) + ":" + temp.substr(position+ref,temp.length());
	ref++;

	cout << "temp: " << temp << endl;
	cout << "temp.length(): " << temp.length() << endl;
	
	position = 1;
	cout << "position: " << position << endl;
	
	temp = temp.substr(0,position+ref) + ":" + temp.substr(position+ref,temp.length());
	ref++;
	
	cout << "temp: " << temp << endl;
	cout << "temp.length(): " << temp.length() << endl; 

	// we can insert here/here/here 
	// store that string in an array of possibilities 
	// concatinate the first and last element with each of the posibilities 
	// for each of the combinations find the largest number 	
	*/

	return 0;
}
