#pragma once
#include <iostream>
#include <vector>
#include "Shop.h"
using namespace std;

class ShopManager {
	vector<Shop*> shops;
public:
	void addShop(Shop* shop);
	Shop* findShopWithLowestPrice(string productName);
};