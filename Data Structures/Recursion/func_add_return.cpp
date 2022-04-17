#include <iostream>
using namespace std;
int add(int a, int b);

int main()
{
    int input1, input2 , answer ;
    cout << "Enter nUMBERS ";
    cin >> input1 >> input2;
     
    
    cout<<"The answer is "<<add(input1, input2);
    return 0;
    
}
int add(int a, int b)
{
    int sol;
    sol = a + b;
    return sol;
}
