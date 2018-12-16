#include <iostream>
#include <string>

using namespace std;

int main()
{

    const double single_level1 = 21450.00;
    const double single_level2 = 51900.00;

    const double single_tax1 = 3217.50;
    const double single_tax2 = 11743.50;

    const double married_level1 = 35800.00;
    const double married_level2 = 86500.00;

    const double married_tax1 = 5370.00;
    const double married_tax2 = 19566.00;

    const double rate1 = 0.15;
    const double rate2 = 0.28;
    const double rate3 = 0.31;

    double income;
    double tax;

    cout << "enter your income: ";
    cin >> income;

    cout << "enter s for single, m for married";
    string marital_status;
    cin >> marital_status;

    if (marital_status == "s")
    {
        if (income <= single_level1)
            tax = rate1 * income;
        else if (income <= single_level2)
            tax = single_tax1
                + rate2 * (income - single_level1);
        else
            tax = single_tax2
                + rate3 * (income - single_level2);
    }
    else
    {
        if (income <= married_level1)
            tax = rate1 * income;
        else if (income <= married_level2)
            tax = married_tax1
                + rate2 * (income - married_level1);
        else
            tax = married_tax2
                + rate3 * (income - married_level2);
     }
     cout << "the tax is : $" << tax << "\n";

    return 0;
}
