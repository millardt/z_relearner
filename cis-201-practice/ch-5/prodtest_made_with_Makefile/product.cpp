#include <iostream>
#include "product.h"

using namespace std;

Product::Product()
{
    price = 1;
    score =0;
}

void Product::read()
{
    cout << "enter model name: ";
    getline(cin, name);
    cout << "enter price: ";
    cin >> price;
    cout << "enter score: ";
    cin >> score;
    string remainder; //read remainder of line
    getline(cin, remainder);
}

bool Product::is_better_than(Product b) const
{
    if (price == 0) return true;
    if (b.price == 0) return false;
    return score / price > b.score / b.price;
}

void Product::print() const
{
    cout << name << "Price: " << price << "Score: " << score;
}
