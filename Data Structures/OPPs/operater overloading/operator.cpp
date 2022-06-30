#include<bits/stdc++.h>
using namespace std;

class Complex
{
    int i , r;
    public:// access modifer 
    Complex(int i=0, int r=0)
    {
        this->i=i;
        this->r=r;
    }

    Complex operator +(Complex obj2)
    {
        Complex Temp;
        // this the Temp Object is used for returning
        Temp.i=i+obj2.i;
        Temp.r=r+obj2.r;
        return Temp;
    }
    void display()
    {
        cout<<i<<"i +"<<r;
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