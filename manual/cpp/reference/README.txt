Name: Edgar Martinez
Email: edgarmar@usc.edu
File: reference.cpp
Link: https://www.geeksforgeeks.org/references-in-c/

-----------------------------------------------------------------------------------

When a varibale is declared as reference, it becomes an alternative name for an existing variable. A reference variable is declared by using '&' in the declaration. 

-----------------------------------------------------------------------------------

Declaration:

int main() {

	int x = 100; 
	int& reference = x;

	// if we change the value of reference, it will result in a change of x
	reference = 200;

	// if we output x from this point, the output value would be 200

	return 0;
}

-----------------------------------------------------------------------------------

Pros:

1. If a reference is passed as a paramater to a function we can directly modify the referenced paramater (we will not be minipulationg a copy of the paramater).

2. Since we don't create a copy of the passed paramater we can utilize CPU and memory much more efficiently in the case of large structures. (i.e when we pass a large structure as an argument to a function)

3. References are easier to use, unlike pointers there is no "dereferencing" needed (also references can use the '.' notation to access members/methods of a class and not the '->' notation as with pointers).
Cons: 

1. Unlike pointers, when a reference is created it must be assigned to some variable (and it cannot later be made to reference another variable).
	
	Example: 


	int main() {

		int x = 100;		

		// reference variables must be assigned to another variable when
		// declared 

		/* this is not okay */
		int& ref1;

		/* this is okay (declare and referece to another variable) */
		int& ref2 = x;

		return 0;
	}
