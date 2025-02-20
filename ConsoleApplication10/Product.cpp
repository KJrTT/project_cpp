#include <iostream>
#include "Product.h"
using namespace std;


string Product::getTitle() const {
	return title;
}

int Product::getId() {
	return id;
}

ostream& operator<<(ostream& os, const Product& product) {
	os << product.title;
	return os;
}