#include <iostream>
using namespace std;

int main()
{
    int input, row, element = 1;
    cout << "enter no . of times";
    cin >> input;

    for (row = 1; row <= input; row++)
    {

        //    for =  while
        
        for (   ;element <= row   )

        {
            cout << "#";
            element++;
        }
        element = 1;

        cout << endl;
    }

    return 0;

}