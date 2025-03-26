#include "ShopManager.h"
#include <limits>

void ShopManager::addShop(Shop* shop) {
	shops.push_back(shop);
}

Shop* ShopManager::findShopWithLowestPrice(string productName) {
	Shop* bestShop = nullptr;
	double lowestPrice = numeric_limits<double>::max();

	for (auto shop : shops) {
		if (shop->check_product(productName)) {
			double price = shop->getPrice(productName);
			if (price < lowestPrice) {
				lowestPrice = price;
				bestShop = shop;
			}
		}
	}

	if (!bestShop) {
		throw runtime_error("Товар не найден ни в одном магазине");
	}
	return bestShop;
}