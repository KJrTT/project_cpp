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
		double price = shop.getPrice(productName);
		double all_money = price * quantity;
		if (money >= all_money) {
			shop.sell_product(productName, quantity);
			add_basket(Product(productName), quantity);
			money -= all_money;
		}
		else {
			throw runtime_error("Недостаточно денег");
		}
		return true;
	}
	else {
		throw runtime_error("Нету такого товара");
	}
};


double Buyer::getMoney() {
	return money;
};

void Buyer::print_buyer() {
	cout << "Корзина покупателя " << name << ":" << endl;
	cout << "Баланс: " << money << " руб." << endl;
	cout << "Список товаров:" << endl;
	cout << "----------------------------------------" << endl;
}


void Buyer::print() {    
	if (productList.empty()) {
		cout << "Корзина пуста" << endl;
		cout << "----------------------------------------" << endl;
		return;
	}
    for (auto& list : productList) {
        cout << "Товар: " << list.first.getTitle() << endl;
        cout << "Количество: " << list.second << " шт." << endl;
        cout << "----------------------------------------" << endl;
    }
	cout << "Оставшаяся сумма денег: " << money << " руб." << endl;
}



