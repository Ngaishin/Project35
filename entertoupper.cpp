#include "entertoupper.h"
#include <cctype>
#include <iostream>

void runTP()
{
	string str;
	cout << "enter ('q'to quit): ";

	while (getline(cin, str) && !(str.size() == 1 && str[0] == 'q'))
	{
		tupper(str);
		cout << "enter ('q'to quit): ";
	}
	cout << "Done!";
}

void tupper(string& str)
{
	for (int i = 0; i < str.size(); i++)
	{
		str[i] = toupper(str[i]);
	}
	cout << str << endl;
}