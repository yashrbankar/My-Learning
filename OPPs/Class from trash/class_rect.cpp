#include <iostream>
using namespace std;

class area
{
    int a, b;

public:
    void values(int length, int breath)
    {
        a = length;
        b = breath;

        cout << "Area of Rectangle :" << endl;

        cout << a * b;
    }
};

int main()
{
    int length, breath;

    cout << "Enter Lenght and Breath :" << endl;
    cin >> length;
    cin >> breath;

    area rectangle ;

    rectangle.values(length, breath);
    // area rectangle.values(); // mistake // 

    return 0;
}