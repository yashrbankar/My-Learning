#include <iostream>
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

public:
    int m;
    int n;
    int x;
    Element *e;
    void create();
    void display();
    void addition();
};

void Sparse::create()
{
    cout << "enter the dimension ::" << endl;
    cin >> m >> n;
    cout << "enter the non zero elements : " << endl;
    cin >> x;
    e = new Element[x];
    for (int i = 0; i < x; i++)
    {
        cout << "enter the row no.:";
        cin >> e[i].row;
        cout << "enter the column no.:";
        cin >> e[i].col;
        cout << "enter the num:ber:";
        cin >> e[i].ele;
    }
}

void Sparse::display()
{
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (e[count].row == i && e[count].col == j)
            {
                cout<<e[count++].ele<<" ";
            }
            else
            {
                cout<<"0"<< " ";
            }
        }
        cout<<endl;
    }
}

void Sparse::addition( Sparse s1, class Sparse s2)
{
    Sparse *sum;
    sum=new Element[s1.x+s2.x];
    if (s1.m!=s2.m || s1.n!=s2.n)
    {
        cout<<"invaild dimension ";
        // return 0;
    }
    int i=0 , j=0 , k=0;
    while (i<s1.x && j<s2.x)
    {
       if (s1.e[i].row<s2.e[j].row)
       {
           sum->e[k++]=s1.e[i++];
       }
       else if (s1.e[i].row>s2.e[j].row)
       {
           sum->e[k++]=s2.e[j++];
       }
       else
       {
           if (s1.e[i].col<s2.e[j].col)
           {
               sum->e[k++]=s1.e[i++];
           }
           else if (s1.e[i].col>s2.e[j].col)
           {
               sum->e[k++]=s2.e[j++];
           }
           else
           {
               sum->e[k]=s2.e[i];
               sum->e[k].ele=s1.e[i].ele + s2.e[j++].ele;
           }
       }   
    }

    for ( ; i < s1.x; i++)
    {
        sum->e[k++]=s1.e[i];
    }
    for ( ; j < s2.x; j++)
    {
        sum->e[k++]=s1.e[j];
    }

    cout<<"Addtion is  :: "<<endl;
    sum->display();
}

int main()
{
    Sparse s1;
    s1.create();
    cout<< endl<< endl;
    cout << "enter the 2nd matrix :: ";
    Sparse s2;
    s2.create();
    Sparse obj;
    obj.addition();

    cout<<"---------------------------"<<endl;
    cout<<"---------------------------"<<endl;
    s1.display();
    cout<<"---------------------------"<<endl;
    cout<<"---------------------------"<<endl;
    s2.display();
    
    

    return 0;
}