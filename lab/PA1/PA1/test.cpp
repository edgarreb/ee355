#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() 
{

	int power = 7;	
	long int phone = 7000000000;
	int phone1 = 760;
	cout << phone << endl;

	int x1 = phone/pow(10,6);
	cout << "x1: " << x1 << endl;

	int x2 = ((phone)/10000)%10000;
	cout << "x2: " << x2 << endl;
	
	int x3 = phone%10000;
	cout << "x3: " << x3 << endl; 

	cout << "converting to string" << endl;
	
	string str = to_string(phone);
	cout << "str: " << str << endl;
	cout << "str.substr(): " << str.substr(0,1) << endl;
	cout << "length: " << str.length() << endl;
	
	/* BELOW CODE USED FOR PHONE CONSTRUCTOR 
	// 7606040339
	// 760-604-0339
	
	string phone = "0600120339";
	cout << phone << endl;

	long int area_code;
	long int number;
	long int phone_number;

	// this is the case where there are two "-"
	if(phone.find("-") == 3 && phone.find("-", 4) == 7) 
	{	
		string area = phone.substr(0,3);
		string middle_digit = phone.substr(4,3);
		string last_digit = phone.substr(8);
		string last_number = middle_digit + last_digit;
		
		area_code = atoi(area.c_str());
		number = atoi(last_number.c_str());
		phone_number = area_code*10000000 + number;
		cout << phone_number << endl;
	}
	else if(phone.find("-") == 3 && phone.find("-", 4) > 7) 
	{
		cout << "else if" << endl;
		area_code = atoi((phone.substr(0,3)).c_str());
		number = atoi((phone.substr(4)).c_str());
		phone_number = area_code*10000000 + number;
		cout << phone_number << endl;
	}
	else 
	{
		cout << "else" << endl;
		area_code = atoi((phone.substr(0,3)).c_str());
		number = atoi((phone.substr(3)).c_str());
		phone_number = area_code*10000000 + number;
		cout << phone_number << endl;
	} */

	return 0;
}
