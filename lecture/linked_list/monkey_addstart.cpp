/*
Incomplete. 
Create a method addStart(string newName) that adds a new Node, containing this name, at the start of the list.

*/
#include <iostream>
#include <string>
using namespace std;

// structure of items in list
struct Node {
   Node* next;  // each node knows "next" node
   string name; // and stores a value
   Node(string initialName);  // constructor for nodes
};

Node::Node(string initialName) {name = initialName; next = NULL;}

class MonkeyChain {
   public:
      MonkeyChain();
      void threeKongs();
      void printAll();
      void addStart(string newName); // NEW!
   private: 
      Node* head;
};

MonkeyChain::MonkeyChain() {head = NULL;}

// a demo to create a length-3 list
void MonkeyChain::threeKongs() {
   head = new Node("DK Sr.");
   head->next = new Node("DK");
   head->next->next = new Node("DK Jr.");
}

// we'll provide a working copy of printAll for you 
void MonkeyChain::printAll() // ... { method body not shown }

// add a new node, containing this name, at the start of the list
void MonkeyChain::addStart(string newName) {
   Node* newHead = new Node(newName);




}


int main() {
   MonkeyChain mc;
   mc.threeKongs();
   mc.addStart("King Kong");
   mc.printAll(); cout << endl;
   mc.addStart("Bubbles");
   mc.printAll(); cout << endl;

   mc = MonkeyChain(); // test 2: insert into empty list
   mc.addStart("Test 2 Monkey");
   mc.printAll(); 
   // TO-DO: clean up memory
}
