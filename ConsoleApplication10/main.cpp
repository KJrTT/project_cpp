#include <iostream>
#include "Buyer.h"
#include "Product.h"
#include "Shop.h"
#include "ShopManager.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    try {
        Shop shop1("Shop1", 1);
        shop1.addProduct(Product("Яблоки"), 10, 5);
        shop1.addProduct(Product("Молоко"), 10, 10);

        Shop shop2("Shop2", 2);
        shop2.addProduct(Product("Яблоки"), 8, 5); 
        shop2.addProduct(Product("Молоко"), 12, 10);

        ShopManager manager;
        manager.addShop(&shop1);
        manager.addShop(&shop2);
        Shop* bestShop = manager.findShopWithLowestPrice("Яблоки");
        cout << "Лучшая цена на яблоки в магазине: " << bestShop->getName() << endl;

        Buyer buyer(1, "Кирилл", 100);
        buyer.print_buyer();

        buyer.buy_product(*bestShop, "Яблоки", 2);

        buyer.buy_product(shop1, "Молоко", 3);

        buyer.print();
    }
    catch (runtime_error e) {
        cout << "Ошибка: " << e.what() << endl;
    }

    return 0;
}

