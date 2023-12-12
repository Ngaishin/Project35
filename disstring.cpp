#include "disstring.h"
#include <iostream>

using namespace std;

void mydisStr(char* c, int t)
{
	static int times = 0;
	if (t == 0)
	{
		cout << c << endl;
	}
	else
		for (int i = 0; i < times; i++)
		{
			cout << c << endl;
		}
	times++;
}