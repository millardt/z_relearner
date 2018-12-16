#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<double> salaries;
    cout << "enter salaries, 0 to quit: \n";
    bool more = true;
    while (more)
    {
        double s;
        cin >> s;
        if (s == 0)
            more = false;
        else
            salaries.push_back(s);
    }

    double highest = salaries[0];
    int i;
    for (i = 0; i < salaries.size(); i++)
    {
        cout << salaries[i];
        if (salaries[i] == highest)
            cout << "<== highest value";
        cout << "\n";
    }

    return 0;
}
