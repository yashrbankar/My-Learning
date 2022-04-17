#include <iostream>
using namespace std;

class complex
{
    int real;
    int imga;

public:
    void set(int r, int i)
    {
        real = r;
        imga = i;
    }
    void display(void)
    {
        cout << real << "+  i" << imga;
    }

    im
    complex operator+(correct obj)
    {
        obj.real = real + obj.real;
        obj.imga = imga + obj.imga;
    }
};

int main()
{

    complex a, b, suma;
    a.set(1, 2);
    b.set(3, 6);
    // a.display();
    // b.display();

    complex suma = a  + b ;
    suma.display();
    return 0;
}