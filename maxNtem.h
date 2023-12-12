#ifndef MAXNTEM_H
#define MAXNTEM_H

#include <cstring>
#include <iostream>

using namespace std;

template<class T>
T maxn(T t[], int len)
{
	for (int i = 1; i < len; i++)
	{
		t[0] = t[0] > t[i] ? t[0] : t[i];
	}
	return t[0];
}

template<>
const char* maxn<const char*>(const char* pc[], int len)
{
	const char* ch = pc[0];
	for (int i = 1; i < len; i++)
	{
		ch = strlen(ch) > strlen(pc[i]) ? ch : pc[i];
	}
	return ch;
}

#endif // !MAXNTEM


