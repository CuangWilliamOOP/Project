#include "Drink.h"


Drink::Drink(){
	
}

int Drink::get_count(){
	return count;
}

int Drink::get_price(){
	return price;

}

int Drink::brew(){
	count = count - 1;
	return count;
}

int Drink::change_count(){
	count = 0;
}

int Drink::get_drunk_level(){
	return 0;
}

std::string Drink::get_name(){
	return name;

}

Drink::~Drink(){}

