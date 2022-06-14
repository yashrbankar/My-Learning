#include <iostream>
using namespace std;
// changes
int main()
{
    int input, no_of_element, highest_value, add;
    cout << "The no of numbers :";
    cin >> no_of_element;
    add = no_of_element + 1;
    int input_of_array[no_of_element];

    for (int i = 0; i < no_of_element; i++)
    {
        cout << "Element Number :" << i + 1 << " = ";
        cin >> input_of_array[i];
    }

    int max_value1 = -1234567;
    for (int i = 0; i < no_of_element; i++)
    {
        if (max_value1 < input_of_array[i])
        {
            max_value1 = input_of_array[i];
            highest_value = i;
        }
    }
    cout << "Max value" << max_value1 << endl;
    cout << highest_value;

    // second Hight no ;
    int max_value2 = -1234567;

    for (int i = 0; i < no_of_element; i++)
    {
        if (max_value2 < input_of_array[i] && i != highest_value)
        {
            max_value2 = input_of_array[i];
            // highest_value= i;
        }
    }
    cout << "Max 2nd  value : " << max_value2 << endl;

    //  Spliiting of hightest value
    int splitting = max_value1 - max_value2;

    input_of_array[highest_value] = max_value2;
    input_of_array[highest_value + 1] = splitting;

    for (int i = 0; i < add; i++)
    {
        
        input_of_array[highest_value] = max_value2;
        input_of_array[highest_value + 1] = splitting;
        cout << input_of_array[i] << endl;
    }

    return 0;
}