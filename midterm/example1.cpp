// Name: Edgar Martinez
// Email: edgarmar@usc.edu

#include <iostream>

using namespace std;

struct Node 
{
	int val;
	Node* next;
};

class LinkedList
{
	public: 
	// int size ()
	void removeLast(int k);

	private:
	Node* head;
};

int main()
{

	// create a linked list with 5 links 
	Node* First = new Node;
	First->val = 1;
	
	Node* Second = new Node;
	Second->val = 2;
	

	Node* Third = new Node;
	Third->val = 3;

	Node* Fourth = new Node;
	Fourth->val = 4;

	Node* Fifth = new Node;
	Fifth->val = 5;

	First->next = Second;
	Second->next = Third;
	Third->next = Fourth;
	Fourth->next = Fifth;
	Fifth->next = NULL;
	
	
	return 0;
}
