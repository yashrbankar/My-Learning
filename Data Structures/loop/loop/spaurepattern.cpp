#include <iostream>

using namespace std;

int main()
{
    int input, r, c, d, s;
    cout << "Enter No.";
    cin >> input;
    s = 2 * input - 3;
    for (r = 1; r <= input; r++)
    {
        if (r == 1)
        {
            for (c = 1; c <= input; c++)
            {
                cout << "*"
                     << " ";
            }
            cout << endl;
        }

        //middle Protion
        else if (r > 1 && r < input)
        {

            if (r < input)
            {
                cout << "*";
                for (d = 1; d <= s; d++)
                {
                    cout << " ";
                }

                cout << "*" << endl;
            }
        }

        if (r == input)
        {
            for (c = 1; c <= input; c++)
            {
                cout << "*"
                     << " ";
            }
            cout << endl;
        }
    }
}