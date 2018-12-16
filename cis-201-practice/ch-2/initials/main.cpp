#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "enter full name: ";
    string first;
    string middle;
    string last;
    cin >> first >> middle >> last;
    string initials = first.substr(0, 1)
        + middle.substr(0, 1) + last.substr(0, 1);
    cout << "Your initials are: " << initials << "\n";

    return 0;
}
