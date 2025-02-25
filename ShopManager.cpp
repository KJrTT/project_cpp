#include "ShopManager.h"
#include <limits>
using namespace std;



void ShopManager::addShop(Shop shop) {
    shops.push_back(shop);
}

Shop* ShopManager::CheapestShop(std::string productName) {
    Shop* cheapestShop = nullptr;
    double minPrice = std::numeric_limits<double>::max();

    for (auto& shop : shops) {
        if (shop.check_product(productName)) {
            double price = shop.getPrice(productName);
            cout << "Shop: " << shop.getName() << ", Price: " << price << endl;
            if (price < minPrice) {
                minPrice = price;
                cheapestShop = &shop;
            }
        }
    }

    return cheapestShop;
}