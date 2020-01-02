// Name: Edgar Martinez
// Email: edgarmar@usc.edu
// Source Code: 

```````````````````````````````````````````````````````````````````````````````````

This README will refer to the files inside of the "example1" directory. 


```````````````````````````````````````````````````````````````````````````````````

Background:

We have two files inside of this directory, this first being "main.cpp" and the second being "add.cpp". The reason that we have these two files is so that we can demonstrate the use of header files. In this example ("example1") we do not use header files. In the next example ("example2") we do use header files. When compiling the files make sure that you compile both files at the same time ("g++ main.cpp add.cpp").

```````````````````````````````````````````````````````````````````````````````````

What is going on ?:

Inside of the "add.cpp" file you will find a function decleration for add(). The file "main.cpp" will need to use this add() function to return the result of two numbers. Therfore, inside of "main.cpp" we must have a prototype function for add(), without this prototype function the compiler will throw an error (something along the lines of add() not found).

```````````````````````````````````````````````````````````````````````````````````

Why do we need header files: 

Imagine if we had a hundred different functions defined inside of the "add.cpp" and we wanted to use them inside of "main.cpp" and other .cpp files. This Would mean that we would have to prototype all one hundered functions into every single .cpp file that wants to use them. This can make our code very messy and be painfully time consuming for large projects.

```````````````````````````````````````````````````````````````````````````````````
