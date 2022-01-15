#include <iostream>
using namespace std;
int a, b, x, y;

 int first()
{

    cout << "Enter 1st Real No . :";
    cin >> a;
    cout << "Enter 1st imaginary No . :";
    cin >> b;
    return 0;
}
int second()
{

    cout << "Enter 2nd Real No . :";
    cin >> x;
    cout << "Enter 2nd  imaginary No . :";
    cin >> y;
    return 0;
}

int cal()
{
    first();
    second();
    cout<<"The Addtion is : ";
    cout << a + x << "+" << b + y << "!";
    return 0;
}

int main()
{
    cal();

    return 0;
}