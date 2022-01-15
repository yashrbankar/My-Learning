#include <iostream>
using namespace std;
void  odd(int input_number);


int main()
{
    int first_no;
    cout << "Enter First no. ";
    cin >> first_no;

    odd(first_no);

    return 0;
}

void odd(int input_number)
{
    if (input_number % 2 == 0)
    {
        cout << "Number is Even ";
    }
    else
    {
        cout << "Number is odd";
    }
    
}