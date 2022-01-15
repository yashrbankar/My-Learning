#include<iostream>
using namespace std;
struct rect
{
    int lenght;
    int brenth;
};
struct rect* func()
{
    struct rect *p;
    p=new rect;
    p->brenth=100;
    p->lenght=1000;
    return p;
}

int main()
{
    struct rect *ptr=func();
    cout<<" B :: "<<ptr->brenth<<endl;
    cout<<" L :: "<<ptr->lenght;
return 0;
}