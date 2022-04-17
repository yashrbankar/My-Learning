#include <iostream>
using namespace std;
class dublicate
{
    int *arr;
    int n;

public:
    dublicate();
    int getmax(int , int );
    int func();
};

int main()
{
    dublicate obj;
    obj.func();
    return 0;
}

dublicate::dublicate()
{
    cout << "Enter the n :: ";
    cin >> n;
    cout << "Enter elements in the array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
int dublicate::getmax(int l, int h)
{
    int max = -111;
    int i;
    for (i = l; i < h; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }  
    }
    return (i);
    
}

int  dublicate::func()
{
    int temp = 1, i = 0 ;
there:
    if (i < n && arr[i]<=n) // 1 2 5 4 3 
    {
        i= getmax(i, arr[i]);
        temp++;
        cout << "Min jump ::" << temp;
        goto there;
    }
    cout << "Min jump ::" << temp;
}
