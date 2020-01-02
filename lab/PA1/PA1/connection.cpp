
#include "connection.h"

Connection::Connection(){
    // I'm already done! 
    set_connection();
}


Connection::~Connection(){
    // TODO: Complete me!

	delete birthdate;
	delete email;
	delete phone;
}

Connection::Connection(string fname, string lname,
        string bdate, string email, string phone){
    // TODO: Complete this method!
    // phone and email strings are in full version

	this->f_name = fname;
	this->l_name = lname;

	birthdate = new Date(bdate);

	string type;

	type = email.substr(1, email.find(")")-1);
	string e_address = email.substr(email.find(")") + 2);

	this->email = new Email(type, e_address);

	type = phone.substr(1, phone.find(")")-1);
	string p_number = phone.substr(phone.find(")") + 2);

	this->phone = new Phone(type, p_number);
}


Connection::Connection(string filename){
    // TODO: Complete this method!

	set_connection(filename);
}


void Connection::set_connection(){
    // prompts for the information of the user
    // first/last name can have spaces!
    // date format must be "M/D/YYYY"
    // We are sure user enters info in correct format.
    // TODO: complete this method!
    	// COMPLETED
	string trash;
    string temp;
    string type;
    
    cout << "First Name: ";
    // code here
	getline(cin, f_name);

	cout << "Last Name: ";
    // code here
	getline(cin, l_name);

    cout << "Birthdate (M/D/YYYY): ";
    // code here
	getline(cin, temp);
	birthdate = new Date(temp);
    
    cout << "Type of email address: ";
    // code here
	cin >> type;

    cout << "Email address: ";
    // code here
	string e_address;
	cin >> e_address;
	email = new Email(type, e_address);

    cout << "Type of phone number: ";
    // code here
	cin >> type;

    cout << "Phone number: ";
    // code here
	string p_number;
	cin >> p_number;

    // code here
	phone = new Phone(type, p_number);

}	


void Connection::set_connection(string filename){
    // TODO: Complete this method!
    // Look at connection_template files as examples.     
    // Phone number in files can have '-' or not.
	
	ifstream input_file;
	input_file.open(filename);
	
	string temp;
	string type;
	string p_number;
	string e_address;

	// first and last name 
	getline(input_file, temp);
	
	this->l_name = temp.substr(0, temp.find(","));
	this->f_name = temp.substr(temp.find(",") + 2);

	// birthday 
	getline(input_file, temp);

	birthdate = new Date(temp);

	// email
	getline(input_file, temp);
	
	type = temp.substr(1, temp.find(")"));
	e_address = temp.substr(temp.find(")") + 2);

	email = new Email(type, e_address);
	
	// phone	
	
	getline(input_file, temp);
	
	type = temp.substr(1, temp.find(")"));
	p_number = temp.substr(temp.find(")") + 2);

	phone = new Phone(type, p_number);

	input_file.close();
	
}

bool Connection::operator==(const Connection& rhs){
    // TODO: Complete this method!
    // Note: Difference to Lab is that from now on the combination of fname-lname is unique for any connection

	if( (this->f_name == rhs.f_name) && (this->l_name == rhs.l_name) )
	{
		return true;
	}
	else 
	{
		return false;
	}
}


bool Connection::operator!=(const Connection& rhs){ 
    // TODO: Complete this method!
	return !(*this == rhs);
	
}


void Connection::print_connection(){
    // Already implemented for you! Do not change!
	cout << l_name <<", " << f_name << endl;
	birthdate->print_date("Month D, YYYY");
    email->print();
    phone->print();
}

