#include <iostream>
#include <algorithm>
using namespace std;

int func(int height[], int n)
{
    int prev_high  = height[0];
    int limit;
    int current, sum = 0;
    for(int i=1; i<n-1;i++)
    {
        current = height[i];
        if (prev_high  <= current)
        {
            prev_high =current;
        }
        else
        {
            limit = *max_element(&height[i+1], &height[n]);
            if (current < limit)
            {
                if (limit > prev_high )
                {
                    limit = prev_high ;
                }
                sum = sum + (limit - current);
            }
        }
        
    }
    return sum;
}
int main()
{
    int height[6] = {3,0,0,2,0,4};
    cout << "Water trapped 1:: " << func(height, 6);
    return 0;
}