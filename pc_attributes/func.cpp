#include <iostream>
#include "class.cpp"

Attribute::Attribute(){
	_type = "no_type";
	_name = "no_name";
	_price = 0;
	_count = 0;
	_description = "no description";
}
Attribute::Attribute(std::string t, std::string n, int p, int c, std::string d) {
	_type = t;
	_name = n;
	_price = p;
	_count = c;
	_description = d;
}
std::string Attribute::getType() {
	return _type;
}
std::string Attribute::getName() {
	return _name;
}
int Attribute::getPrice() {
	return _price;
}
int Attribute::getCount() {
	return _count;
}
std::string Attribute::getDesc() {
	return _description;
}
void Attribute::setPrice(){
	int p;
	do {
		std::cout << "Enter price: ";
		std::cin >> p;
	} while (p < 100 || p>50000);
	_price = p;
}
void Attribute::setType(){
	std::string t;
	std::cout << "Enter type: ";
	std::cin >> t;
	_type = t;
}
void Attribute::setName(){
	std::string n;
	std::cout << "Enter name: ";
	std::cin >> n;
	_name = n;
}

void Attribute::setCount(){
	int c;
	do {
		std::cout << "Enter count: ";
		std::cin >> c;
	} while (c > 10);
	_count = c;
}

void Attribute::setDescription(){
	std::string d;
	std::cout << "Enter description: ";
	std::cin >> d;
	_description = d;
}

void Attribute::sale(int sale){
	_price -= _price * (sale / 100);
}

void Attribute::ToString() {
	std::cout << getType() << "\n\n" << "Count: " << getCount() << "\n" << "Price: " << getPrice() << "\n" << "Comment: " << getDesc() << "\n";
}