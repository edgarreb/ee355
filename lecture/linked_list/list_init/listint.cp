#include <iostream>
#include "listint.h"

using namespace std;

  // Initialize an empty list
ListInt::ListInt()
{
  cout << "***Creating ListInt object" << endl;
  head = NULL;
}

// Destructor (free all memory for each item)
ListInt::~ListInt()
{
  cout << "***Deleteing ListInt object" << endl;
  while( ! is_empty() ){
    pop_front();
  }

}

// Returns true if the list is empty
bool ListInt::is_empty()
{
  return (head == NULL);

}

// Returns the number of items in the list 
int ListInt::size()
{
  int cnt = 0;
  IntItem* curr = head;
  while( curr != NULL  ){
    cnt++;
    curr = curr->next;
  }
  return cnt;
}

// Prints each integer item in the list (separated by a space)
void ListInt::print_list()
{
  IntItem* curr = head;
  while(curr != NULL ) {
    cout << curr->val << " ";
    curr = curr->next;
  }
  cout << endl;
}

// Add a new integer, new_val, to the back of the list
void ListInt::push_back(int new_val)
{
  IntItem *dummy = new IntItem;
  dummy->val = new_val;  dummy->next = NULL;
  if( is_empty()  ){
    head = dummy;
  }
  else {
    // List already has some items
    IntItem* curr = head;
    while( curr->next != NULL ){
      curr = curr->next;
    }
    curr->next = dummy;
  }
}

// Add a new integer, new_val, to the front of the list
// pushing every other item back one
void ListInt::push_front(int new_val)
{
  IntItem *dummy = new IntItem;
  dummy->val = new_val;  
  dummy->next = head;
  head = dummy;
}

// Remove the front item it there is one
void ListInt::pop_front()
{
  if( ! is_empty() ){
    IntItem* temp = head;
    head = head->next;
    delete temp;
  }
}

// Return the item value at the front of the list
int ListInt::front()
{
  if( ! is_empty() ){
    return head->val;
  }
  return -1;
}


// IntItem *ListInt::find(int find_val)
// {

// }

// bool ListInt::remove(int del_val)
// {

// }

// ListInt &ListInt::operator+(const ListInt &rhs)
// {

// } 


