#pragma once
#include <iostream>
using namespace std;

class Product {
	string title;
	int id = 0;
public:
	Product(string title) : title(title) {};

	string getTitle()const;
	int getId();

	bool operator<(const Product& other) const {
		return title < other.title;
	}
};