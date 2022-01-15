#include <iostream>
using namespace std;

// base class
class A
{

    int a;

public:
    int b;
    int get()
    {
        b = 10;
        cout << "This is base class ::" << b << endl;
    }
};

class B : public A
{
public: // dought : Why we need to declared here public ?
    int get1()
    {
        get();
        // cout << a;
    }
};

int main()
{
    B obj;
    obj.get1();

    // obj.A::get();

    // obj.get();
    // obj.A::get();  // choice1
    //     A *ptr;
    //     ptr=&obj;
    // // &obj.get();
    //     ptr->get();  // choice 2

    return 0;
}