#include "../include/replace.h"
#include <iostream>

using namespace std;


//Replaces "find" with "repl", within the string "in"
//Returns the result
string Replace(string find, string repl, string input) 
{
	
	int pos = 0;//Position of search in input string
	string newStr;//New string formed from replacements

	//Set the position of the first occurance of "find"
	pos = input.find(find, pos);

	while (pos != -1)
	{
		//Replace "repl" with "find"
		newStr = input.replace(pos, find.length(), repl);
		
		//Shift position to after replacemeny
		pos += repl.length();

		//See if there's another occurance of "find"
		pos = input.find(find, pos);
	}

	return newStr;
}
