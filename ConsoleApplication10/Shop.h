#pragma once
#include <iostream>
#include <vector>
#include "Product.h"
#include "ProductInto.h"
using namespace std;


class Shop {
	vector <ProductInto> products;
	string title;
	int id;

public:
	Shop(string title, int id) : title(title), id(id) {};

	void addProduct(Product product, double price, int quantity);
	bool check_product(string productName);
	string getName();
	bool sell_product(string productName, int quantity);
	double getPrice(string product_name);


};
