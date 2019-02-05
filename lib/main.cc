#include <unistd.h>
#include <iostream>
#include "../include/replace.h"

using namespace std;

int main(int argc, char *argv[])
{
	string find = "", replce = "";

	if (argc >= 2)
	{
		find = argv[1];
		replce = argv[2];
	}
	else
	{
		cout << "Enter a value to find:\n";
		cin >> find;
		if (cin.peek() == '\n') cin.ignore();

		cout << "Enter a value to replace:\n";
		cin >> replce;
		if (cin.peek() == '\n') cin.ignore();
	}

	while (!cin.eof())
	{

		string in = "";//String for input

		getline(cin, in);//Takes input in

		cout << Replace(find, replce, in) << "\n";//Spits out 
	}

	return 0;
}
