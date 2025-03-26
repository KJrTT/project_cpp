#pragma once
#include <iostream>
#include <vector>
#include "Product.h"
using namespace std;



class ProductInto {
	Product product;
	double price;
	int quantity;
public:
	ProductInto(double price, int quantity, Product product);

	double getPrice();
	int getQuantity();
	Product getProduct();
	void setQuantity(int new_quant);

};