#include <iostream>
#include <vector>
#include "Shop.h"
#include "Buyer.h"
using namespace std;


void Buyer::add_basket(Product product, int quantity) {
	productList[product] += quantity;
};


bool Buyer::buy_product(Shop shop, string productName, int quantity) {
	try {
		if (shop.sell_product(productName, quantity)) {
			Product product(productName);
			add_basket(product, quantity);
			return true;
		}
	}
	catch (const runtime_error& e) {
		cerr << "Ошибка при покупке: " << e.what() << endl;
	}
	return false;
};


double Buyer::getMoney() {
	return money;
};


void Buyer::print() const {
	if (productList.empty()) {
		std::cout << "Корзина пуста" << std::endl;
		std::cout << "----------------------------------------" << std::endl;
		return;
	}
	for (auto pair : productList) {
		std::cout << "Товар: " << pair.first.getTitle() << std::endl;
		std::cout << "Количество: " << pair.second << " шт." << std::endl;
		std::cout << "----------------------------------------" << std::endl;
	}
	std::cout << "Оставшиеся деньги: " << money << " руб." << std::endl;
}

double Buyer::print_money() {
	return money;
}

