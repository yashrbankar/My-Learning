
#include <iostream>
        using namespace std;
    int main()
    {
        int n, i, a, factor = 0;
        cout << "Enter the number: ";
        cin >> n;
        a = n / 2;
        for (i = 2; i <= a; i++)
        {
            if (n % i == 0)
            {
                cout << "Number is not Prime." << endl;
                factor++;
                break;
            }
        }
        if (factor == 0)
        {
            cout << "Number is Prime." << endl;
        return 0;
        }
            
    }
