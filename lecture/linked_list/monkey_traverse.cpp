/*  Incomplete 
Create a method printAll() that prints out all names in the list, one per line.
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

void MonkeyChain::printAll() {
   // one possible approach: use a while loop
   Node* current = head; // start at beginning

   // if current isn't past the last node,
   while (                 ) {
      // print current node's name; then repeat loop w/next one


   }
}


int main() {
   MonkeyChain mc;
   mc.threeKongs();
   mc.printAll(); cout << endl;
   // double-check
   mc.printAll(); 
}
