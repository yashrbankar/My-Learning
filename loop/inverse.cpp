#include <iostream>
using namespace std;
int main()
{
    int x;
    // 9247
    cout<<"enter four number"<<endl;
    cin>>x;
    int a, b , c , d ;
    d= int(x%10);
    a=int(x/1000);
    b=int(x-1000*a)/100;
    c=int(x-(100*b+1000*a))/10;
     
    // a=d*1000;
    // b=c*100;
    // c=b*10;
    // d=a;

    cout<<d<<c<<b<<a;
    return 0;

}
