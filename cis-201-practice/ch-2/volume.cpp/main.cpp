#include <iostream>

using namespace std;

int main()
{
    double bottles;
    cout << "bottles";
    cin >> bottles;

    double cans;
    cout << "cans";
    cin >> cans;

    const double bottle_volume = 2.0;
    const double can_volume = .3555;
    double total = bottles * bottle_volume + cans * can_volume;

    cout << "volume is " << total << "liters \n";

    return 0;
}
