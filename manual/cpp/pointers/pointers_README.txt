// Name: Edgar Martinez 
// Email: edgarmar@usc.edu
// Source Code: pointers.cpp
// Reference: http://www.cplusplus.com/doc/tutorial/pointers/

```````````````````````````````````````````````````````````````````````````````````

This README will walk you through what a pointer is, and how to use them in your program. 

```````````````````````````````````````````````````````````````````````````````````

Address-of operator (&):

When you create a variable, somewhere in memory there must be space allocated to store it. The address-of operator is used to extract the address where the variable is stored. 

Example:

lets create a variable x, that holds an integer value of 10. (let us assume that x is stored at memory address 0x100)

int x = 10;

cout << x << endl;  /* this will output the value stored in x */
cout << &x << endl; /* this will ouput the address where x is located in memory */

Note: 

The memory location that was allocated for x will not be the same everytime we run our program. The OS allocates a random memory location for x everytime that we run.
(hence &x could be 0x100 in the first run, and 0x258 in the second run etc...)

```````````````````````````````````````````````````````````````````````````````````

Dereference Operator (*):

A variable which stores the address of another variable is called a pointer. Pointers are said to "point to" the variable whose address they store. Pointers can be used to access the variable that they point to directly, this is done by using the dereference operator (*). The (*) operator can be read as "value pointed to by". 

```````````````````````````````````````````````````````````````````````````````````

Declaring Pointers:

The decleration of a pointer needs to include the data type that the pointer is going to point to. 

Syntax:

type* name;

Example:

int* number;
char* character;
double* decimals;

Note:

Note that the (*) used when declaring a pointer only means that it is a pointer, and should not be confused with the dereference operator (they are two different things represented by the same sign). 

Try not to declare multiple pointers at a time.

```````````````````````````````````````````````````````````````````````````````````


