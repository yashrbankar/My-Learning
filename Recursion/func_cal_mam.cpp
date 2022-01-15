#include <iostream>
using namespace std;

void add() // no para no return
{
    int a, b;
    cout << " Enter Values ";
    cin >> a >> b;
    cout << "Addition" << a + b;
}
void sub(int x, int y) //  para no ret
{
    cout << "Sub:" << x - y;
}
int mul() // return ,no para
{
    int a, b, c;
    cout << "Enter";
    cin >> a >> b;
    c = a * b;
    return c;
}
int div(int x, int y) // para and retrun
{
    int x, y, z;
    z = x / y;
    return z;
}

int main()
{
    // add();

    // meaning
    //=
    // int a ,b;
    // cout<< " Enter Values ";
    // cin>>a>>b;
    // cout<<"Addition"<<a+b;

    // sub

    // int a , b ;
    // cin>>a>>b;
    // sub(a ,b); // sub func call and give values
    // return 0;

    // multi

    // cout<< mul();

    // div
    // int a, b ,x ;
    // cin >> a >> b;
    // div(a, b);
    // cout << "Div" << div();
}