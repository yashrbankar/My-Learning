#include <iostream>
using namespace std;

int main()
{
    float hour, min, f, t;
    cout << "enter  hour time  ";
    cin >> hour;
    cout << "enter  min ";
    cin >> min;
    f = min / 60;
    t = hour + f;

    switch (t <= 12)
    {
    case 1:
        cout << "Its AM";
        break;
    case 0:

        switch (t > 12 && t <= 24)
        {
        case 1:
            cout << "Its PM";
            break;

        case 0:
            cout << "Basdike din me 24hr hote hai";
            break;
        }
        break;
    }
    return 0;
}