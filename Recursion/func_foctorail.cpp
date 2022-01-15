#include <iostream>
using namespace std;

int foctor(int number);

int main()
{ 
    int input ;

    cout << "Enter no ";
    cin >> input;
    foctor(input);

    return 0;
}

int foctor(int number)
{
    int i , mult=1 ;
    
    cout << "The foctorial of :" << number<<"!"<<endl;
    for (int i = number; i > 0; i--)
    {

        cout << i << "*";
    }

    for (int i = 1; i <= number; i++)
    {
        mult = mult * i;
        
        // Uses of mult is that Upgrade values
    }
    cout<<endl;
    cout<<number<<"! is "<<mult;

}