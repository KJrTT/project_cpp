#include <iostream>
#include "Buyer.h"
#include "Product.h"
#include "Magazin.h"
using namespace std;



int main()
{
    setlocale(LC_ALL, "");

    try {
        Shop shop1("Shop1", 1);
        shop1.addProduct(Product("Яблоки"), 10, 5);
        shop1.addProduct(Product("Молоко"), 10, 10);

        Buyer buyer(1, "Кирилл", 100);
        buyer.print_buyer(); 
        buyer.buy_product(shop1, "Яблоки", 2); 
        buyer.buy_product(shop1, "Яблоки", 2);   
        buyer.buy_product(shop1, "Яблоки", 2); 
        buyer.buy_product(shop1, "Молоко", 3); 
        buyer.print(); 
    }
    catch (runtime_error e) {
        cout << "Ошибка: " << e.what() << endl;
    }


    return 0;
}

