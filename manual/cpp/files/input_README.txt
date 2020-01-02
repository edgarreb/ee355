// Name: Edgar Martinez 
// Email: edgarmar@usc.edu
// Source Code: input.txt

``````````````````````````````````````````````````````````````````````````````````

When reading from files you can use two stream classes. The first stream class is "ifstream", which is used for input only. The second stream class that we can use to read from files is "fstream", which can be used for both reading and writing to files. Writing to files is similar to using "cout", which prints to the command line. Instead of "cout", we will use the stream object to write out to the file. 

``````````````````````````````````````````````````````````````````````````````````

Opening a file:

To open a file we can call a method inside of the ifstream class. The open() method will open a file for us, we simply have to give it the name of the file we want it to open as an argument.

Example:

int main() 
{
	ifstream input;
	input.open("filename.txt");
}

```````````````````````````````````````````````````````````````````````````````````

State flags:

The following member functions exist to check for specific states of a stream (all of them return a bool value).

bad():
returns true if a reading or writing operation fails. For example, when we try to write to a file that is not open for writing or if the device where we try to write has no space left.

fail():
Returns true in the same cases as bad(), but also in the case that a format error happens, like when an alphabetical character is extracted when we are trying to read an integer number.

eof():
Returns true if a file open for reading has reached the end.

good():
It is the most generic state flag: it returns false in the same cases in which calling any of the previous functions would return true. Note that good and bad are not exact opposites (good checks more state flags at once).

The member function clear() can be used to reset the state flags.


```````````````````````````````````````````````````````````````````````````````````

getline():

Syntax: 

getline(istream& is, string str, char delim)

"Get line from stream into string" 
getline() has three arguments that it can take, the first argument specifies from where characters will be extraced from. If we have a stream for reading from files we can use that as an argument for getline. The second argument is where the extracted characters will be stored. The second argument must be a string variable type. The last argument to getline() (which is optional) is a character delimintor. The deliminator tells getline() when to stop storing characters into str. If no deliminator is given getline() will default to the new line character '\n'.

Example:

int main() 
{
	ifstream input;
	input.open("input.txt");

	string str;
	// this will grab every character from input until a space is found
	getline(input, str, ' ');
	
}

```````````````````````````````````````````````````````````````````````````````````
