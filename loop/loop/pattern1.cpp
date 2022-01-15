#include <iostream>

using namespace std;

int main()
{
    int input, column, row = 1;
    cout << "number of times ";
    // 10
    cin >> input;
    //    1     10
    for (row = 1; row <= input; row++)
    {
        for (column = 1; column <= input; column++)

        {
            cout << "#"<< "  ";
        }
        cout << endl;
    }
    

    return 0;

}