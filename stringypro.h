#ifndef STRINGYPRO_H
#define STRINGYPRO_H

struct stringy
{
	char* str;
	int ct;
};

void runStringy();

void set(stringy& str, char* l);
void show(const stringy& str, int times = 1);
void show(const char* str, int times = 1);


#endif // !stringypro
