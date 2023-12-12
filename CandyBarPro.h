#ifndef	CANDYBARPRO_H
#define CANDYBARPRO_H

struct CandyBar
{
	char name[30];
	double weight;
	int calories;
};

void candyBarPar(CandyBar& cb, const char name[] = "Millennium Munch", double weight = 2.85, int calories = 350);

void disCandyBarPar(const CandyBar& cb);

#endif