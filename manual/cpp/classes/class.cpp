// Name: Edgar Martinez
// Email: edgarmar@usc.edu

#include <iostream>
#include <string>

using namespace std;

class player
{
public:
	int x;
	int y;
	string name; 

	// move() function has access to the variables x and y inside of player
	void move(int a, int b)
	{
		x = x + a;
		y = y + b;
	}
};

int main()
{
	// player1 is an object/instance of type player
	player player1;
	player1.x = 0; 
	player1.y = 0;
	player1.name = "Edgar"; 

	cout << "initial position: " << player1.x << " " << player1.y << endl;
	
	player1.move(2,-1);
	cout << "position: " << player1.x << " " << player1.y << endl; 

	player1.move(2,10);
	cout << "position: " << player1.x << " " << player1.y << endl; 

	cout << "player name: " << player1.name << endl;

	return 0; 
}
