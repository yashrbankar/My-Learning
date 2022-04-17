#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    // array example
    int marks[4] = {1200, 1300, 1300, 124};

    // changing value of array
    marks[3] = 1224;

    // maths
    int mathmarks[4];
    mathmarks[0] = 12;
    mathmarks[1] = 124;
    mathmarks[2] = 125;
    mathmarks[3] = 126;

    // logic marks
    int logic[] = {800, 900, 1000, 825};

    // cout marks
    cout << "Total marks ";
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[0] << endl;

    cout << "the maths  Marks" << endl;
    cout << mathmarks[1] << endl;
    cout << mathmarks[2] << endl;
    cout << mathmarks[3] << endl;
    cout << mathmarks[0] << endl;
    cout << "Logic";
    // for ( i = 0; i < 4; i++)
    // {
    //     cout<<"The logic Marks : "<<logic[i]<<endl;

    // }
    do
    {

        cout << "The logic Marks : " << logic[i] << endl;
        i++;
    } while (i < 4);

    // pointer normal

    // int q=90;
    // cout<< "the address of q : "&q;

    // array new type 
    // int yashq[] ={10,103,234,432};
    // int*p= yashq [];
    
    cout<<"the value of yashq:"<<*(p);
    cout<<"the value of yashq:"<<*(p+1);
    cout<<"the value of yashq:"<<*(p+2);
    cout<<"the value of yashq:"<<*(p+3);

    // pointer for array
    int* p = marks ;
    cout << "The value of marks :" << *p << endl;
    cout << "The value of marks :" << *(p + 1) << endl;
    cout << "The value of marks :" << *(p + 2) << endl;
    cout << "The value of marks :" << *(p + 3) << endl;



    return 0;
}