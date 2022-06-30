#include<bits/stdc++.h>
using namespace std;

class Complex
{
    int imginary , real;
    public:// access modifer 
    Complex(int imginary=0, int real=0)
    {
        this->imginary=imginary;
        this->real=real;
    }

    Complex operator +(Complex obj2)
    {
        Complex Temp;
        // this the Temp Object is used for returning
        Temp.imginary=imginary+obj2.imginary;
        Temp.real=real+obj2.real;
        return Temp;
    }
    void display()
    {
        cout<<imginary<<"imginary +"<<real;
    }
};

int main()
{
    Complex obj1(1,4),obj2(2,3);
    Complex obj;
    obj=obj1+obj2;
    obj.display();
   return 0;
}