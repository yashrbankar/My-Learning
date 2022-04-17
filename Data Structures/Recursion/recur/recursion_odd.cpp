#include <iostream>
using namespace std;

int recr(int x, int y)
{
    if (x <= y)
    {
        if (x % 2 != 0)
        {
            cout << x;
            cout << "is odd"<<" || ";
            recr(x + 1, y);

        }
        else
        {
            cout<< x;
            cout << "Even"<<endl;
            recr(x + 1, y);
            
        }
    }
}

int main()
{
    int l, m;
    cout << "Enter 1st limit ;";
    cin >> l;
    cout << "Enter 1st limit :";
    cin >> m;
    recr(l, m);

    return 0;
}