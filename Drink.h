#ifndef DRINK_H
#define DRINK_H
#include "Bartender.h"

class Drink{
private:
	int maximum;
	int count;
	int price;

public:
	Drink();
	void get_count();
	void drink_list();



};
#endif