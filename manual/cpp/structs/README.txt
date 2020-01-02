// Name: Edgar Martinez
// Email: edgarmar@usc.edu
// Source Code: structs.cpp

```````````````````````````````````````````````````````````````````````````````````

A data structure is a group of data elements grouped together under one name. These data elements are known as members. 


```````````````````````````````````````````````````````````````````````````````````

Defining Data Structures: 


Sytnax: 

struct struct_name 
{
	member_type1 member_name1;
	member_type2 member_name2;
	...

};


Example:

struct product 
{
	int weight;
	double price;
};

product apple;
product bannana, melon; 

```````````````````````````````````````````````````````````````````````````````````

Accessing Members:

The syntax for accessing object members is simply to insert a dot (.) between the object name and the member name. 

Example: 

apple.weight = 10; 
apple.price = 2.50;


