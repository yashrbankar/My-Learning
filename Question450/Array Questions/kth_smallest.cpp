#include <iostream>
using namespace std;

int compare(int main[], int ind , int length)
{
    for (int i = 0; i <length; i++)
    {
        if (main[i] == ind)
        {
            return i;
        }
    }
}
int sort(int dubli[], int length, int k)
{
    for (int j = 0; j < length; j++)
    {
        for (int i = 0; i < length; i++)
        {
            if (dubli[i] > dubli[i + 1])
            {
                int temp = dubli[i];
                dubli[i] = dubli[i + 1];
                dubli[i + 1] = temp;
            }
        }
    }

    return dubli[k - 1];
}
////////////
int dublicate(int main[], int length, int k)
{
    int dubli[length];
    for (int i = 0; i < length; i++)
    {
        dubli[i] = main[i];
    }
    int element, indexF ,i;
    element = sort(dubli, length, k);
    indexF = compare(main, element , length );
    cout <<k << "th "<<"Smallest element :: " << element << endl;
    cout << "index :: " << indexF << endl;
}

int main()
{
    int length = 0, k = 0;
    cout << " Length of Array :: ";
    cin >> length;
    cout << "Enter kth smallest element to find :: ";
    cin >> k;

    int main[length];
    cout << "Enter the array " << endl;

    for (int i = 0; i < length; i++)
    {
        cin >> main[i];
    }
    dublicate(main, length, k);
    

    return 0;
}