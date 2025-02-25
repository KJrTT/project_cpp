#include "ProductInto.h"
#include <stdexcept>
using namespace std;

ProductInto::ProductInto(double price, int quantity, Product product)
    : price(price), quantity(quantity), product(product) {
    if (price < 0) {
        throw invalid_argument("÷ена не может быть отрицательной");
    }
    if (quantity < 0) {
        throw invalid_argument(" оличество не может быть отрицательным");
    }
}

double ProductInto::getPrice() {
    return price;
}

int ProductInto::getQuantity() {
    return quantity;
}

Product ProductInto::getProduct() {
    return product;
}

void ProductInto::setQuantity(int new_quant) {
    quantity = new_quant;
}