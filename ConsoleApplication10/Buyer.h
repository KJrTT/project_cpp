#pragma once
#include <iostream>
#include <map>
#include "Product.h"
#include "Magazin.h"
using namespace std;

class Buyer {
	int id;
	string name;
	double money;
	map <Product, int> productList;
public:
	Buyer(int id, string name, double money) : id(id), name(name), money(money) {};

	void add_basket(Product product, int quantity);
	bool buy_product(Shop shop, string productName, int quantity);
	double getMoney();
	void print_buyer();
	void print();

};