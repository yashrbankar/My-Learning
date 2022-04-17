#include <iostream>
using namespace std;

// Structure and class are same
// class has only Extra Features of data Hiding
// Private protected

// syntex
class yash //() :: mistake scope 
{
    // Defult Private
    int  b, c;
    // int a=111;

    public:
    int a=111;
    int d, e;
    // member function
    void setdata(int, int, int);
     //declaretion only
    void getdata()
    {
        cout << "This is a :: " << a << endl;
        cout << "This is b :: " << b << endl;
        cout << "This is c :: " << c << endl; 
        cout << "This is d :: " << d << endl;
        cout << "This is e :: " << e << endl;
    }
};

// redecleartion
void yash ::setdata(int a1, int b1, int c1) // Private data var need set values
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    yash obj;
    cout<<"this obj "<<obj;
    obj.d=10;
    obj.e=1980;
    // This is private 
    // obj.a=1980;
    // obj.b=1980;
    // obj.c=1980;

    obj.setdata(1, 2, 3);
    obj.getdata();

}
    return 0;