#include <iostream>
using namespace std;

class salary
{
    int amount, hours;

public:
    getinfo(int a, int b)
    {
        amount = a;
        hours = b;
        if (a < 500)
        {
            addsal();
        }
        else
        {
            addwork();
        }
    }
    addsal()
    {
        int extratime = 5;

        if (hours <= 6)
        {
            cout << "Your Final salary :" << endl;
            cout << amount + 10 << "$";
        }
        else
        {
            cout << "Your OverTime" << endl << extratime << "$" << endl;
            cout << "Your Final salary :" << endl;
            cout << amount + extratime + 10 << "$";
        }
    }
    addwork()
    {
        int extratime = 5;

        if (hours <= 6)
        {
            cout << "Your Final salary :" << endl;
            cout << amount << "$";
        }

        else
        {

            cout << "Your OverTime" << endl<< extratime << "$" << endl;
            cout << "Your Final salary :" << endl;
            cout << amount + extratime << "$";
        }
    }
};

int main()
{
    int amount, h;
    cout << "Enter Amount" << endl;
    cin >> amount;
    cout << "Enter ur working hour" << endl;
    cin >> h;

    salary extrapayment;
    extrapayment.getinfo(amount, h);
    // extrapayment.getinfo();

    return 0;
}