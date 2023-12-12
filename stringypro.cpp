#include "stringypro.h"
#include <cstring>
#include <iostream>

using namespace std;

void runStringy()
{
	stringy str;
	char ch[34] = "Reality isn't what it used to be.";
	set(str, ch);
	show(str);
	cout << "show 5 times: \n";
	show(str, 5);
	cout << "show charactors: \n";
	show(ch);
	show("Done!");
}

void set(stringy& str, char* l)
{
	str.ct = strlen(l);
	str.str = new char[ str.ct+ 1];
	//str.str[str.ct] = '\0';
	strcpy_s(str.str, str.ct+1, l);
}

void show(const stringy& str,int times)
{
	for (int i = 0; i < times; i++)
	{
		cout << str.str << endl;
	}
}

void show(const char* str,int times)
{
	for (int i = 0; i < times; i++)
	{
		cout << str << endl;
	}
}