#include <iostream>
#include "Product.h"
using namespace std;


string Product::getTitle() const {
	return title;
}

int Product::getId() {
	return id;
}

bool Product::operator<(const Product& other) const{ 
		return title < other.title; 
} 
