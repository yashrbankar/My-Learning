#include<bits/stdc++.h>
using namespace std ;

int main(){

    int N;
    cin>>N;
    int cntOfOne=0;
    int cntOfMinusOne=0;
    while (N--)
    {
        int x;
        vector<int> v;
        for (int  i = 0; i < x; i++)
        {
            cin>>v[i];
        }
        if (v.size() %2 ==0)
        {
            for (int  i = 0; i < v.size(); i++)
            {
                if (v[i]==1)
                {
                    cntOfOne++;
                }
                
            }
            cntOfMinusOne=v.size()-cntOfOne;
            cout<<max(cntOfMinusOne,cntOfOne)/2<<endl;
            
        }
        cout<<-1<<endl;

    }
    
    return 0;
}