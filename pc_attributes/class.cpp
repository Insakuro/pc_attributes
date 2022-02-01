#include <iostream>

class Attribute
{
private:
	std::string _type;
	std::string _name;
	int _price;
	int _count;
	std::string _description;
public:
	Attribute();
	Attribute(std::string t, std::string n, int p, int c, std::string d);
	std::string getType();
	std::string getName();
	int getPrice();
	int getCount();
	std::string getDesc();
	void setPrice();
	void setType();
	void setName();
	void setCount();
	void setDescription();
	void sale(int sale);
	void ToString();
};