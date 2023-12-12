#ifndef SUMARRY_H
#define SUMARRY_H

void runSA();

struct debts
{
	char name[50];
	double amount;
};


template<class T>
T mySumarry(T t[], int len)
{
	T tem=T ();
	for (int i = 0; i < len; i++)
	{
		tem += t[i];
	}
	return tem;
}

template<class T>
T mySumarry(T*t[], int len)
{
	T tem=T();
	for (int i = 0; i < len; i++)
	{
		tem += *t[i];
	}
	return tem;
}

#endif // !SUMARRY_H
