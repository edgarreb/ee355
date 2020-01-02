File: dynamic.cpp
Topic: dynamic memory allocation 
Reference: https://www.geeksforgeeks.org/new-and-delete-operators-in-cpp-for-dynamic-memory/

``````````````````````````````````````````````````````````````````````````````````

Allocating memory: 
To allocate memory in C++ we have the "new" operator. The "new" operator denotes a request for memory allocation in the Heap. If sufficient memory is available, the "new" operator initializes the memory and returns the address of the newly allocated and initialized memory to a pointer variable. 

```````````````````````````````````````````````````````````````````````````````````

Syntax to use new operator: 
pointer_variable = new data-type 

example: 
int* ptr = NULL; 
ptr = new int; 

``````````````````````````````````````````````````````````````````````````````````

Initialize memory: 
When we us the "new" operator we can initialize the address we are allocated with a value. 

example: 
int* ptr = NULL;
ptr = new int(10);

``````````````````````````````````````````````````````````````````````````````````

Allocate block of memory:
The "new" operator can be used to allocate a block(an array) of memory. "size" specifies the number of elements in an array, or memory locations that would be allocated continuosly. 

syntax: 
 pointer_variable = new data_type[size]

"pointer_variable" will hold the value of the first address in the memory block that was allocated. 

example: 
int* p = NULL; 
p = new int[3];

p[0] refers to the the first element in the array

``````````````````````````````````````````````````````````````````````````````````

Delete operator: 
It is the programmers responsibility to deallocate dynamically allocated memory. If you do not deallocate memory that was dynamically allocated after you are done using it this can cause a "memory leak". 

syntax: 
// release memory pointed by pointer_variable
delete pointer_variable;

delete a dynamically allocated array:
// release block of memory 
delete[] pointer_variable; 
