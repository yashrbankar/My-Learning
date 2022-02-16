#include<bits/stdc++.h>
using namespace std;



int main()
{

    //! Q3 Counting Alphabets
    int i=0;
    char arr1[]="hey. How are you all";
    int counter=0;

    while(arr1[i]!=0)
    {
        if((arr1[i]>=65 && arr1[i]<=90) || (arr1[i]>=97 && arr1[i]<=127)) //! acsii condition for alphabets
        {
            counter++;
        }
        i++;
    }
    cout<<"total words ::"<<counter;
   return 0;
}