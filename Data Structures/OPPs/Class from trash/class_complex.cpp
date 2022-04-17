#include <iostream>
using namespace std;

class complex
{
    int i1, r1, i2, r2;

public:
    complex(int a , int b , int c, int d)
    {
        r1 = a ;
        i1 = b ;
        r2 = c ;
        i2 = d ;
    }

    void addition()
    {

        cout << "The Addtion of complex no is " << endl;
        cout << r1 + r2 << "+" << i1 + i2 << "!"<<endl;
    }
    void subtraction()
    {

        cout << "The suntraction of complex no is " << endl;
        cout << r1 - r2 << "+" << i1 - i2 << "!"<<endl;

    }
    void multi()
    {
        int im , re ;
        cout << "The multi of complex no is " << endl;
        re=r1*r2 + (-i1*i2);
        im=r1*i1+i1*r2 ;

        cout<<re<<"+"<<im<<"!";

    }
};

int main()
{
    int img1, real1, img2, real2;
    cout <<  "Enter real value" << endl;
    cin  >> real1;
    cout << "Enter img value" << endl;
    cin >> img1;
    cout << "Enter real value" << endl;
    cin >> real2;
    cout << "Enter img value" << endl;
    cin >> img2;

    complex add(real1, img1, real2, img2);
    add.addition();
    complex sub(real1, img1, real2, img2);
    add.subtraction();
    complex mult(real1, img1, real2, img2);
    add.multi();

    return 0;
}