#include <iostream>
using namespace std;

class stock
{

    int arr[7] = {10,22,5,75,65,80,2};
    int max_profit = 0, cur_profit = 0, buy, sell, count = 0;

public:
    int func();
};

int stock::func()
{
    while (count < 7)
    {
        buy = arr[count];

        for (int i = count + 1; i < 7; i++)
        {
            if (cur_profit < arr[i]-buy)
            {
                cur_profit =  arr[i]-buy;
            }
            if (cur_profit>max_profit)
            {
                max_profit=cur_profit;
            } 
        }
        if (max_profit < 0)
            {
                max_profit = 0;
            }
        count++;
    }
    cout<<max_profit;
}

int main()
{
    stock obj;
    obj.func();
    
    return 0;
}