#ifndef DRINK_H
#define DRINK_H
#include <iostream>


class Drink{

public:

	Drink();
	std::string name;
	int maximum;
	int count;
	int price;

	int get_count();
	void drink_list();
	int get_price();
	int brew();
	int change_count();
	
	std::string get_name();
	virtual int get_drunk_level();
	virtual ~Drink();


};
#endif