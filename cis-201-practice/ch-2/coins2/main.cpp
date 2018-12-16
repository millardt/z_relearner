#include <iostream>

using namespace std;

int main()
{
    cout << "pennies ";
    int pennies;
    cin >> pennies;

    cout << "nickels ";
    int nickels;
    cin >> nickels;

     cout << "dimes ";
    int dimes;
    cin >> dimes;

   

    cout << "quarters ";
    int quarters;
    cin >> quarters;

    double total = pennies * .01 + nickels * 0.05 + dimes * .10 + quarters * .25;
    //total value of the coins

    cout << "total " << total << "\n";

    return 0;
}
