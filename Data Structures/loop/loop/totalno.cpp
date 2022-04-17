#include <iostream>

using namespace std;

int main()
{
    int num, div = 1, no = 0, sum = 0, u, l;
    cout << " enter ur  lower limit ::";
    cin >> l;
    cout << " enter ur  upper limit ::";
    cin >> u;
    


        //1        1     5   
    for (num = l; num <= u; num++)
    {        //1   1      2  
        for (div; div <= num; div++)
        {       //2    1
            if (num % div == 0)
            { //1           1
                sum = sum + div;
                cout << "num::" << num << endl;
                // cout << "div::" << div << endl;
                // cout << "sum::" << sum << endl;
            }  //1      1   
            if (sum == num + 1)
            {
                no++;
                cout << "*";
            }
        }
        div=1;
        sum=0;
        cout << "@";
    }

    cout << "total no of prime no is ::" << no;

    return 0;
}