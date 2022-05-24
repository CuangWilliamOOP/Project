#ifndef DRINK_H
#define DRINK_H
#include <iostream>


class Drink{

protected:

	Drink(); // Default constructor
    Drink(std::string, int, int, int); // Parameterized constructor that will accept name, count, prize, and maximum quantity
	std::string name;
	int maximum;
	int count;
	int price;

public:
	
	int get_count(); // Return the drink's quantity
	int get_price(); // Return the drink's price
	int brew(); // Allows bartender to create a drink/decrease the quantity by 1
	
	std::string get_name(); // Return the name of the drink

	virtual int get_drunk_level(); // Return drunk level
	virtual ~Drink(); // Virtual destructor


};
#endif
