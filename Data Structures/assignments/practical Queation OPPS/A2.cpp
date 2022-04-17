#include <bits/stdc++.h>
using namespace std;

class publication
{
protected:
    char title[20];
    float price;
};

class Book : public publication
{
    int pages;

public:
    void getdata()
    {
        cout << "---Enter the details of the book---" << endl;
        cout << "Enter the title of book: ";
        cin >> title;
        cout << "Enter the price of book: ";
        cin >> price;
        cout << "Enter no. of pages: ";
        cin >> pages;
    }
    void putdata()
    {
        cout << "...Book details... " << endl;
        cout << "Title of book= " << title << endl;
        cout << "Price of book= " << price << endl;
        cout << "No. of pages= " << pages << endl;
        cout << endl;
    }
};
class Tape : public publication
{
    float time;

public:
    void getdata()
    {
        cout << "....Enter the details of tape...." << endl;
        cout << "Enter the title of tape : ";
        cin >> title;
        cout << "Enter the price of tape : ";
        cin >> price;
        cout << "Enter playing time : ";
        cin >> time;
        cout << endl;
    }
    void putdata()
    {
        cout << "...Audiocassette details..." << endl;
        cout << "Title of tape= " << title << endl;
        cout << "Price of tape= " << price << endl;
        cout << "time playing of tape(in mins)= " << time << endl;
        cout << endl;
    }
};

int main()
{
    Book b;
    Tape t;
    b.getdata();
    t.getdata();
    b.putdata();
    t.putdata();

    return 0;
}
