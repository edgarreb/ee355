#include <iostream>

using namespace std;

struct Node {
	int val;
	Node* next;
};

class LinkedList {
	public: 
	
	int size(); // given to you you can use it
	
	void removeLast(int k){
		
		if(head == NULL) {
			cout << "ERROR: Empty List" << endl;
		}
		else {
			// this will return the size of the linked list
			int size = size();
			Node* ptr = head;

			if(size == 1) {
				delete ptr;
				head = NULL;
			}
			else {
			
				for(int i = 0; i < size - 1; i++) {
					ptr = ptr->next;
				}
				
				delete ptr->next;
				ptr->next = NULL;
			}
		}
		
	}

	private:
	Node* head;
}

int main() 
{


	return 0;
}
