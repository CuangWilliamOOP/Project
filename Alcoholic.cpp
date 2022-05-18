#include "Alcoholic.h"

Alcoholic::Alcoholic(){}

Alcoholic::Alcoholic(std::string name, int drunk_level, int count, int price, int maximum ){
	this->name = name;
	this->drunk_level = drunk_level;
	this->count = count;
	this->price= price;
	this->maximum = maximum;
}

int Alcoholic::get_drunk_level(){
	return drunk_level;
}

std::string Alcoholic::get_name(){
	return name;

}

int Alcoholic::change_price(int x){

	price = price * x;
	return price;
}

int Alcoholic::change_drunk_level(int x){
	drunk_level = drunk_level * x;
	return drunk_level;
}