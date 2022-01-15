#include <iostream>
using namespace std;
// int counter = 0;
int counter=0;

class shop
{
    int itemid[100];
    int itemprice[100];

public:
    void countre(){ int counter=0; };
    void setdata();
    void getdata();
};

void shop::setdata()
{
    cout << "Enter item id  ::";
    cin >> itemid[counter];
    cout << "Enter item price ::";
    cin >> itemprice[counter];
    cout << "----------------------" << endl;
    // void getdata();
    counter++;
}

void shop::getdata()
{
        cout<<"get";
    for (int i = 0; i < counter; i++)
    {
        /* code */
        cout << "The Product Id id " << itemid[i] << endl;
        cout<< "Its Price is" << itemprice[i] << endl;
        // counter=0;
        cout << endl;
    }
}

int main()
{
    int n;

    cout << " Enter no of element ::";
    cin >> n;

    shop dukaan1, dukaan2;
    dukaan1.counter();
    for (int i = 0; i < n; i++)
    {
        dukaan1.setdata();
        // dukaan2.setdata();
    }

     dukaan1.getdata();

    cout << "**** Dukaaan 2 ****" << endl;
    dukaan2.counter();
    for (int i = 0; i < n; i++)

    {
        // dukaan1.setdata();
        dukaan2.setdata();
    }

    // cout << "**** Dukaaan 2 ****" << endl;
    dukaan2.getdata();

    return 0;
}