#include <iostream>
#include <vector>
#include "Magazin.h"
#include "Buyer.h"
using namespace std;


void Buyer::add_basket(Product product, int quantity) {
	productList[product] += quantity;
};


bool Buyer::buy_product(Shop shop, string productName, int quantity) {
	if (shop.check_product(productName)) {

	}
};


double Buyer::getMoney() {
	return money;
};


void Buyer::print() {
	
};




