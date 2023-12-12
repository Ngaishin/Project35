#include "CandyBarPro.h"
#include <cstring>
#include <iostream>

using namespace std;

void candyBarPar(CandyBar& cb, const char name[], double weight, int calories)
{
	
	strcpy_s(cb.name,strlen(name)+1, name);
	cb.weight = weight;
	cb.calories = calories;
}

void disCandyBarPar(const CandyBar& cb)
{
	cout << cb.name << endl
		<< cb.weight << endl
		<< cb.calories << endl;
}