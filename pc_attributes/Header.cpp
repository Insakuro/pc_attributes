#include "Header.h"

void init() {
	int count = 2;
	int null = 0;
	Attribute* arr = new Attribute[count];

	for (int i{}; i < count; ++i) {
		arr[i].setType();
		arr[i].setName();
		arr[i].setPrice();
		arr[i].setCount();
		arr[i].setDescription();
		std::cout << "\n";
	}

	std::ofstream file;
	file.open("manager.txt", std::ios::app);
	if (file.is_open()) {
		for (int i{}; i < count; ++i) {
			file << arr[i].getType() << "\n\n" << "Count: " << arr[i].getCount() << "\n" << "Price: " << arr[i].getPrice() << "\n" << "Comment: " << arr[i].getDesc() << "\n\n";
		}
	}

	file.close();

	for (int i{}; i < count; ++i)
	{
		if (arr[i].getCount() == 0)
		{
			++null;
		}
		arr[i].sale(15);
	}

	Attribute* arr2 = new Attribute[count-null];

	for (int i{}; i < count; ++i) {
		if (arr[i].getCount() != 0) {
			arr2[i] = arr[i];
		}
	}


	file.open("client.txt", std::ios::app);
	if (file.is_open()) {
		for (int i{}; i < count - null; ++i) {
			file << arr2[i].getType() << "\n\n" << "Count: " << arr2[i].getCount() << "\n" << "Price: " << arr2[i].getPrice() << "\n" << "Comment: " << arr2[i].getDesc() << "\n";
		}
	}

	file.close();

	for (int i{}; i < count; ++i) {
		arr[i].ToString();
	}
}