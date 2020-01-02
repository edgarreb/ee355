// Name: Edgar Martinez 
// Email: edgarmar@usc.edu

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Ticket
{
	public:
	string ID;

	public:
	void print_ID()
	{
		cout << "ID: " << ID << endl;
	}

	void set_ID(string x)
	{
		ID = x;
	}
	
	bool is_expired()
	{
		return true;
	}
};


class VIPTicket : public Ticket 	
{
	public:
	// 5 char min and 20 char max 
	string TickChar;
	int Won;

	public: 
	int check_if_won() 
	{
		if(Won == 1)
		{
			return 1;
		}
		else 
		{
			return 0; 
		}
	}

	void set_the_Winner()
	{
		Won = 1;
	}

	VIPTicket() 
	{
		Won = 0;
	}
};

int main()
{

	// reading from the file 
	ifstream input;
	input.open("input.txt");

	// we will store the ID's in ID_array[]
	string ID_array[5];
	// we will stroe the TickChar in TickChar_array[5]
	string TickChar_array[5];

	int index = 0;
	int line = 0;

	while(input.good())
	{

		if(line == 7) 
		{
			break;
		}		

		if(line < 2)
		{
			string temp;
			getline(input, temp);
		}
		else if(line >= 2)
		{

			string temp;
			getline(input, temp);
		
			ID_array[index] = temp.substr(0,11);
			TickChar_array[index] = temp.substr(12, temp.length());
			index++;
		}		
		line++;		
	}

	input.close();	

	// stroe the ID's, CharTick in VIPTicket array
	VIPTicket* ptr = NULL;
	ptr = new VIPTicket[5];	

	for(int i = 0; i < 5; i++) 
	{
		ptr[i].set_ID(ID_array[i]);	
		ptr[i].TickChar = TickChar_array[i];
	
	}

	// find winners/ losers
	string cond = "YES";
	while(cond == "YES")
	{
		string number;
		cout << "11 digit nummber: ";
			cin >> number;

		for(int i = 0; i < 5; i++) 
		{
			if(number == ptr[i].ID)
			{
				string temp;
				temp = ptr[i].TickChar;
	
				if (temp.find("20Z") <= temp.length() - 1)
				{
					ptr[i].set_the_Winner();
				}
			}
		}

		// write to the file 
		ofstream output;
		output.open("output.txt");
	
		for(int i = 0; i < 5; i++)
		{	
			if(ptr[i].check_if_won() == 1)
			{
				output << "Congrats. Your Ticket " << ptr[i].ID << " is a winner" << endl;
			}
			else 	
			{		
				output << "No Bernies, Yout ticket " << ptr[i].ID << " did not win. Maybe in 2024!" << endl;
			}
		}

		output.close();
	
		cout << "play again, YES or NO: ";
			cin >> cond;

	}

	return 0;
}
