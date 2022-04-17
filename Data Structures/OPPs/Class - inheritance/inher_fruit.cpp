#include <iostream>
using namespace std;

class fruits
{
protected:
    int total;
    int mangoes;
    int apples;
};

class mango : public fruits
{
protected:
    void get()
    {
        cout << " Enter No of mango  :: ";
        cin >> mangoes;
    }
};

class apple : public fruits
{
protected:
    void get2()
    {
        cout << "Enter No of apples :: ";
        cin >> apples;
    }
};

class display : public apple, public mango, public fruits
{
public:
    void t()
    {
        cout << "Total no of Fruit in Basket is :: ";
        cout << mangoes + apples << endl;
        cout << "Total no of Mango  in Basket is :: ";
        cout << mangoes << endl;
        cout << "Total no of apple in Basket is :: ";
        cout << apples << endl;
    }
};

int main()
{

    display to;
    to.display();
}