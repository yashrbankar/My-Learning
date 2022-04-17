// not considered for the  2 negative contingous elements 

#include <iostream>
using namespace std;

class Integer
{
    int n = 10;
    int arr[10] = {-5, -2, 5, -11, -4, 7, -1, 8, 0, 8};

public:
    void func();
};

int main()
{
    Integer obj;
    obj.func();

    return 0;
}

void Integer::func()
{
    int counter = 0, index = 0, key;
    for (int i = 0; i < n ; i++)
    {
        if (arr[i] < 0)
        {
            index = i;
            key = arr[i];
            if (index > counter)
            {
                for (int j = index; j > counter; j--)
                {
                    arr[j] = arr[j-1];
                }
                arr[counter] = key;
                counter = counter + 2;
            }
            else if (index < counter)
            {

                for (int k = index; k <counter ; k++)
                {
                    arr[k] = arr[k+1];
                }

                arr[counter] = key;
                counter = counter + 2;
                i=index+1;
            }
            else
            {
                counter=counter+2;
            }
            
        }
        else
        {
            cout << " Negative integer is not found  "<<endl;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}