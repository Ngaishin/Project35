#include "sumArray.h"
#include <iostream>

using namespace std;


void runSA()
{
	int i[4]{ 2,4,2,1 };
	int sum = mySumarry(i, 4);
	cout << "sum: " << sum << endl;

	debts d[3]
	{
		{"Ima Wolfe",2345.4 },
		{"ADFJKL",435},
		{"adsfas",526}
	};
	double* pd[3];
	for (int i = 0; i < 3; i++)
	{
		pd[i] = &d[i].amount;
	}
	auto sumpd = mySumarry(pd, 3);
	cout << "sumpd: " << sumpd << endl;

}