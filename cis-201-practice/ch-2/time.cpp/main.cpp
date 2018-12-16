include <iostream>

using namespace std;

#include "ccc_time.h" //fake ass idiot include not included in default vim
//bullshit partial program isn't testable
int main()
{
    Time wake(7,0,0);
    wake.add_seconds(1000); //1000 seconds later
    cout << wake.get_hours() 
        << " : " << wake.get_minutes() 
        << " : " << wake.get_minutes() << "\n";

    Time now;
    int seconds_left = Time(23, 59, 59).seconds_from(now);

    cout << "Theres "
        << seconds_left 
        << "seconds left \n";

    return 0;
}
