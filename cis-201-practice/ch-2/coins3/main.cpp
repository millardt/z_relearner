#include <iostream>

using namespace std;

int main()
{
    cout << "pennies";
    int count;
    cin >> count;
    double total = count * .01;

    cout << "nickels";
    cin >> count;
    total = count * .05 + total;

    cout << "dimes";
    cin >> count;
    total = count * .10 + total;

    cout << "quarters";
    cin >> count;
    total = count * .25 +total;

    cout << "total = " << total << "\n";
}
