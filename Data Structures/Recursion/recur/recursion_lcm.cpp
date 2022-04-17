#include <iostream>
using namespace std;


int recur(int x ,int y  )
{
    if(x%y==0)
    {
        cout<<x;
    }
    else
    {
        recur(x+x , y);
    }
    
    
    

}

int main()
{
    int firstno, secondno;
    cout << "Enter Fisrt no:";
    cin >> firstno;
    cout << "Enter Fisrt no:";
    cin >> secondno;
    

    recur(firstno,secondno);


    return 0;
}