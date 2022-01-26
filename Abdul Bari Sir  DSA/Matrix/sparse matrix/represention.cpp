#include<iostream>
using namespace std;

class Element
{
    public:
    int row;
    int col;
    int ele;
};

class Sparse
{
    int m;
    int n;
    int x;
    Element *e;
    public:
    void create();
    void display();
};

void Sparse::create()
{
    cout<<"Enter the Dimension "<<endl;
    cin>>m>>n;
    cout<<"number non-zero elements "<<endl;
    cin>>x;
    e=new Element[x];

    for (int i = 0; i < x; i++)
    {
        cout<<"enter the row no ::";
        cin>>e[i].row;
        cout<<"enter the col no ::";
        cin>>e[i].col;
        cout<<"enter the number ::";
        cin>>e[i].ele;
        cout<<endl<<endl;
    } 
}

void Sparse::display()
{
    int count=0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i==e[count].row && j==e[count].col)
            {
                cout<<e[count++].ele<<" ";
            }
            else
            {                   
                cout<<"0"<<" ";
            }
        }
        cout<<endl;
    }
    
}


int main()
{
    Sparse s;
    s.create();
    s.display();
   return 0;
}