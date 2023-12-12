#ifndef MAXNUMTEM_H
#define MAXNUMTEM_H

template<class T> T max5(T t[])
{
	for (int i = 1; i < 5; i++)
	{
		t[0] = t[0] > t[i] ? t[0] : t[i];
	}
	return t[0];
}


#endif