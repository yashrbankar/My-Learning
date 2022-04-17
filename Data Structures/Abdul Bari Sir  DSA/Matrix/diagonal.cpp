#include <iostream>
using namespace std;

class Matrix
{
    int n = 5;
    int arr[5];

public:
    void set(int , int , int);
    void display();
};

void Matrix::set(int i, int j, int key)
{
    if (i == j)
    {
        arr[i] = key;
    }
}
void Matrix::display()
{
    int k=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == i)
            {
                cout << arr[i] << "  ";
            }
            else
            {
                cout <<k<< "  ";
            }
        }
        cout << endl;
    }
}

int main()
{
    Matrix obj;
    obj.set(0, 0, 1);
    obj.set(1, 1, 2);
    obj.set(2, 2, 3);
    obj.set(3, 3, 4);
    obj.set(4, 4, 5);
    obj.display();

    return 0;
}