#include <iostream>
#include "ProductInto.h"
using namespace std;


double ProductInto::getPrice() {
	return price;
};


int ProductInto::getQuantity() {
	return quantity;
};


Product ProductInto::getProduct() {
	return product;
};


void ProductInto::setQuantity(int new_quant) {
	quantity = new_quant;
};

