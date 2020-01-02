// Name: Edgar Martinez 
// Email: edgarmar@usc.edu
// Source Code: homework_5_part1.cpp

```````````````````````````````````````````````````````````````````````````````````

The source code file "homework_5_part1.cpp" corresponds to the first homework 5 question

```````````````````````````````````````````````````````````````````````````````````

Files:

The name of the input file to read from should be named "input.txt".
The name of the output file for part B is named "outputB.txt".
The name of the output file for part C is named "outputC.txt".

```````````````````````````````````````````````````````````````````````````````````

Part A: 

For part A all I did was read the strings from a file, store them in an array (arrayA[]), and print the elements in the array that weren't empty to the terminal.

```````````````````````````````````````````````````````````````````````````````````

Part B:

For part B I had to use an index to the array (arrayA[]) to find the last location in the array that was filled with an actual string. The reason I did this was due to the fact that we should expect at most 10 string to be read from the input file, but at times the array may have less than 10 strings. Once I found this index to keep track of what elements in the array were actually being used, I printed the contents of the array in a decrementing for loop that way it would print "backwards". 

```````````````````````````````````````````````````````````````````````````````````

Part C:

For part C I used the comparison operators (>, <, etc...) to sort the contents of the array in lexological order. I foud out that this sorting would only work for lower case words, and would sort numbers before the words. To work around this and meet the guidlines for the homework I had to do a couple of things. 

First I had to figure out how many numbers were in my array, that way when I write to the output file I output the sorted words first, and then come back to and ouput the sorted numbers (which were located at the beginning of the sorted array) 

Second I had to convert all words starting with a capital letter to lowercase so that I could do the sorting on the array. I sorted the array, and converted all the words that I changed from capital to lowercase, back to capitals. 

```````````````````````````````````````````````````````````````````````````````````

Note: 

My source code makes the assumption that words will have capital letters only at the beginning of the word, and no capital letters anywhere else. 
 
