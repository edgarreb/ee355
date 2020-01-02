#include <iostream>

using namespace std;

void f1(int* ptr) {
	*ptr = 7;
}

int main() 
{
	// Q1 and Q2
	int x = 100;
	int* p = &x;
	
	// Q3 and Q4
	f1(p);
	cout << "x: " << x << endl;

	// Q5 

	p = new int(5);

	// Q6 and Q7

	double* q = new double[10];
	q[4] = 0;	

	// Q8 and Q9 and Q10

	int** r = new int*[5];
	r[0] = new int[8];
	r[1] = p;
	
	// Q11 and Q12

	char* s[6];
	char* l = new char[10];
	s[5] = l;
		
	// Q13 

	char t[] = "EE355x Yea!";
	
	// Q15
	
	
	return 0;
}
