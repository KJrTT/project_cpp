#pragma once
#include <vector>
#include "Shop.h"

class ShopManager {
    std::vector<Shop> shops;

public:
    void addShop(Shop shop);
    Shop* CheapestShop(string productName);
};