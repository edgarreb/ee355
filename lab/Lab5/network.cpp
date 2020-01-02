
#include "network.h"

Network::Network(){
    head = NULL;
    tail = NULL;
    count = 0;
}


Network::~Network(){
    // Destructure delete all the Connections
    // TODO: Complete this method
    Connection* ptr = head;
    
    while(head != NULL){
        ptr = head->next;
        delete head;
        head = ptr;
        count--;
    }

}


void Network::push_front(Connection* newEntry){
    // Adds a new Connection (newEntry) to the front of LL
  
    newEntry->prev = NULL;
    newEntry->next = head;

    if (head != NULL)
        head->prev = newEntry;
    else
        tail = newEntry;
    
    head = newEntry;
    count++;
}


void Network::push_back(Connection* newEntry){
    // Adds a new Connection (newEntry) to the back of LL
    //TODO: Complete this method!

    newEntry->next = NULL;
    newEntry->prev = tail;

    if(tail != NULL) 
    {
        tail->next = newEntry;
    }	
    else 
        head = newEntry;

    tail = newEntry;
    count++;
}


Connection* Network::search(Connection* searchEntry){
    // Searches the Network for searchEntry
    // Use == overloaded operator for connection
    // if found, returns a pointer to it, else returns NULL
    // TODO: Complete this method!

    Connection* ptr = head;

    if(head == NULL) 
    {
        cout << "ERROR: List Empty" << endl;
    }

    while(ptr != NULL) 
    { 
        if(*ptr == *searchEntry) 
    	{
		return ptr;
	}

	ptr = ptr->next;
    }

    return NULL;
}


void Network::printDB(){
    cout << "Number of connections: " << count << endl;
    Connection* ptr = head;
    while(ptr != NULL){
        ptr->print_connection();
        cout << "------------------" << endl;
        ptr = ptr->next;
    }
}


void Network::saveDB(string filename){
    // Saves the netwrok in file <filename>
    // The format of the output file is similar to printDB()
    // Look at networkDB.txt as a template
    // TODO: Complete this method
    // TODO: Understand why it would be necessary to modify Date class now! 
    // TODO: Go back and uncomment get_date method in Date class (both .h and .cpp) 
    ofstream output;
    output.open(filename);

    Connection* ptr = head;

    while(ptr != NULL) 
    {
        output << ptr->l_name << ", " << ptr->f_name << endl;
        // get the date (will be in month/day/year format) 

        Date* date_ptr = ptr->birthdate;
        string temp = date_ptr->get_date();
	output << temp << endl;
	output << "------------------" << endl;
	
	ptr = ptr->next;
    }

}


void Network::loadDB(string filename){
    // Loads the netwrok from file <filename>
    // The format of the input file is similar to saveDB
    // Look at network networkDB.txt as a template
    // The order of connections in LL does not matter
    // TODO: Understand this code! 

    Connection* ptr = head;
    while(head != NULL){
        ptr = head->next;
        delete head;
        head = ptr;
        count--;
    }
    head = NULL;
    tail = NULL;
    ifstream infile;
    infile.open(filename.c_str());
    string buff, fname, lname, bdate;
    while(getline(infile, buff)){
        lname = buff.substr(0, buff.find(','));
        fname = buff.substr(buff.find(',')+2);
        getline(infile, bdate);
        getline(infile, buff);
        Connection* newEntry = new Connection(fname, lname, bdate);
        this->push_back(newEntry);
    }
    infile.close();
}


bool Network::remove(string fname, string lname, string bdate){
    // TODO: Complete this method! Follow these steps:
    // Create a new connection with the the give arguments ..
    // .. think about what Connection constructor will be helpful with these arguments 
    // Search if this connection exists using search method
    // If it does not exist just return false!
    // Else, remove the connection from LL, make the other connections connected
    // Don't forget to delete allocated memory, change count and returning values!

    Connection* newEntry = new Connection(fname, lname, bdate);
   
    Connection* ptr = this->search(newEntry);    
    Connection* nextElement = ptr->next;
    Connection* prevElement = ptr->prev;
      
    if (this->search(newEntry) != NULL)
    {

	// if we are removing the last element 
	if(nextElement == NULL) 
	{
		prevElement->next = NULL;
		delete ptr;
		delete newEntry;
		count--;
		return 1;
	}
	else if(prevElement == NULL) 
	{
		nextElement->prev = NULL;
		delete ptr;
		delete newEntry;
		count--;
		return 1;
	}
	else if(prevElement != NULL && nextElement != NULL)
	{
		nextElement->prev = prevElement;
		prevElement->next = nextElement;
		delete ptr;
		delete newEntry;
		count--;
		return 1;
	}
	else 
    	{
		delete newEntry;
		return false;
        }

    }
}

