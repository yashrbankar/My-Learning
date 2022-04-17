#include <iostream>
using namespace std;
class area
{

    int a, b, c;

public:
    area(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
        // cout << "Triangle";
    }

    void sol()
    {
        cout << "Area of Triangle :" << endl;
        cout << (a + b + c) / 2 <<endl;
        cout << "Perimeter  of Triangle :" << endl;
        cout << (a + b + c) <<endl;
    }
};

int main()
{
    int x, y, z;
    cout << "Enter Value of side of triangles"<<endl;
    cin >> x;
    cin >> y;
    cin >> z;
    area triangle(x, y, z);

    triangle.sol();

        return 0;
}