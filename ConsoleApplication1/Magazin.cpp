#include <iostream>
#include <vector>
#include "Magazin.h"
using namespace std;



void Shop::addProduct(Product product,double price, int quantity) {
	products.push_back(ProductInto(price,quantity, product));
}


bool Shop::check_product(string research_product) {
	for (auto list : products) {
		if (list.getProduct().getTitle() == research_product) {
			return true;
		}
	}
	return false;
}

double Shop::getPrice(string product_name) {
	for (auto list : products) {
		if (list.getProduct().getTitle() == product_name) {
			return list.getPrice();
		}
	}
	throw runtime_error("Товара нету");
}


bool Shop::sell_product(string productName, int quantity) {
	for (auto list : products) {
		if (list.getProduct().getTitle() == productName) {
			if (list.getQuantity() >= quantity) {
				list.setQuantity(list.getQuantity() - quantity);
				return true;
			}
			else {
				throw runtime_error("Недостаточно товара");
			}
		}
	}
	throw runtime_error("Товар не найден");
};

string Shop::getName() {
	return title;
}