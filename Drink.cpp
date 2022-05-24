#include "Drink.h"


Drink::Drink(){}

Drink::Drink(std::string name, int count, int price, int maximum){
	this->name = name;
	this->count = count;
	this->price= price;
	this->maximum = maximum;
}

int Drink::get_count(){
	return count;
}

int Drink::get_price(){
	return price;

}

int Drink::brew(){
	if(count <  0){
		count = 0;
		return count;
	}else{
		count = count - 1;
		return count;
	}
}


int Drink::get_info_level(){
	return 0;
}

std::string Drink::get_name(){
	return name;

}

Drink::~Drink(){}

