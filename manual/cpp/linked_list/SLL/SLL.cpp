// Name: Edgar Martinez
// Email: edgarmar@usc.edu

#include <iostream>

using namespace std;

struct node {
	int val;
	node* next;
};

class linked_list {
	public:
	node* head;
	node* tail;

	public:
	// linked list methods 

	void print() {
		/* don't loose track of head ! Use a dummy pointer. */
	
		if(head == NULL) {
			cout << "ERROR: Empty List" << endl;
		}
		else {
			node* ptr = head;
		
			while(ptr != NULL) {
				cout << "val: " << ptr->val << endl;		
				ptr = ptr->next;
			}
		}
	}

	node* search(int value) {
		/* dont loose track of the head pointer ! */
		
		// return the address where value is located
		// if value is not found return NULL

		if(head == NULL) {
			cout << "Error: Empty List... " << endl;
			return NULL;
		}
		else{
			node* ptr = head;
			
			while(ptr != NULL) {
				if(ptr->val == value) {
					return ptr;
				}
				ptr = ptr->next;
			}
			
			return NULL;
		}
	}


	void push_back(int value) {

		node* ptr;

		if(head == NULL) {
			ptr = new node;
			ptr->val = value;
			head = ptr;
			ptr->next = NULL;
		}
		else {
			ptr = new node;
			ptr->val = value;
			ptr->next = head;
			head = ptr;			
		}
	}


	void push_front(int value) {
		
		node* lead = head;
		
		if(head == NULL) {
			node* ptr = new node;
			ptr->val = value;	
			head = ptr;
			ptr->next = NULL;
		}
		else {
			while(lead != NULL) {
				
				if(lead->next == NULL) {
					node* ptr = new node;
					ptr->val = value;
					ptr->next = NULL;
					lead->next = ptr;
					break;
				}
				
				lead = lead->next;
			}
		}
	
	}
	
	void pop_front() {
		
		if(head == NULL) {
			cout << "ERROR: Empty List" << endl;
		}
		else {
			node* ptr = head;
			head = ptr->next;
			delete ptr;
		}
	}	

	void pop_back() {
	
		if(head == NULL) {
			cout << "ERROR: Empty List" << endl;
		}	
		else {
			node* lead = head;
			node* trail = head;
			lead = lead->next;
	
			if(lead->next == NULL) {
				head = NULL;
				delete trail;
			}
			else {
				while(lead->next != NULL) {
					trail = trail->next;
					lead = lead->next;
				}

				delete lead;
				trail->next = NULL;
			}
		}
	}
	public:
	linked_list() {
		head = NULL;
		tail = NULL;
	}	
};

int main()
{
	linked_list SLL;
	node* first = new node;
	SLL.head = first;
	first->val = 1;
	
	node* second = new node;
	second->val = 2;
	first->next = second;
	
	node* third = new node;
	third->val = 3;
	second->next = third;
	third->next = NULL;

	SLL.print();
	
	cout << "push_back(): " << endl;
	SLL.push_back(0);
	SLL.print();

	cout << "push_front(): " << endl;
	SLL.push_front(4);
	SLL.print();

	cout << "pop_front(): " << endl;
	SLL.pop_front();
	SLL.print();

	cout << "pop_back(): " << endl;
	SLL.pop_back();
	SLL.print();

	return 0;
}
