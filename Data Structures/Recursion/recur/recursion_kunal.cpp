#include <iostream>
using namespace std;
int print(int i ,int x)
{
    
    if (i <= x)
    {
        print(i + 1 , x); 
        cout << "Hello" << i << endl;
        cout<<"-----------------"<<endl;

    }
    cout<<"#####";
    return 0;
}

int main()
{
    int n;
    cin >> n;
    print(1 , n);
    return 0;
}