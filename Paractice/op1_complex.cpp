#include <iostream>
using namespace std;

class Complex
{
    int img;
    int real;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    void display()
    {
        cout << real << "+ " << img <<"i "<< endl;
    }

    Complex operator*(Complex c)
    {
        Complex obj;
        obj.real = real + c.real;
        obj.img = img + c.img;
        return obj;
    }
};

int main()
{           
    Complex c1(5, 4);
    Complex c2(6, 12);
    Complex add;
    add = c1    *   c2;  // use is clearly understanding  
    // c2(c1) 
    //   class   operater/ (class c1)
    // c3=c1.-(c2)
    add.display();
    return 0;
}