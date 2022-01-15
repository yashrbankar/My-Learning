#include <iostream>
#include <cmath>
using namespace std;
int sum = 0 ,n;

int index(int j)
{
    
    if (j != 0)
    {
        // cout<<"1"<<endl;
        sum = sum + 1;
        index(j/10);
    }
    // cout<<"#";
    cout<< sum;
}

int main()
{
    
    cout << "Enter Number :";
    cin >> n;
    // 100

    cout<<index(n);
    return 0;
}