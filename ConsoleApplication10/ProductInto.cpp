#include <iostream>
#include "ProductInto.h"
using namespace std;

ProductInto::ProductInto(double price, int quantity, Product product) : product(product), price(price), quantity(quantity){
	if (price <= 0) {
		throw runtime_error("÷ена должна быть положительной");
	}
	if (quantity < 0) {
		throw runtime_error(" оличество не может быть отрицательным");
	}
}

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


