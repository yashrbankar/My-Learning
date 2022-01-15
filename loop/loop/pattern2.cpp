#include <iostream>

using namespace std;

int main()
{
    int n, a, b=1;
    cout << "enter no . of times";
    cin >> n;
    // 5    
    for (a = 1; a <= n; a++)
    {
        while (b <= a)
        {
            cout << "#";
            // cout<<"2";
            b++;  
        }
        cout<<endl;
        b=1;
        
    }

    return 0;
}