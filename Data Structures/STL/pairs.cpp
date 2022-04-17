#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, string> p; // !two data type or containers like set ,map
    // p=make_pair(1,"yash"); //* style
    p = {1, "yash"};
    cout << p.first << " " << p.second << endl;
    pair<int, string> p1 = p; // *by value
    p1.first = 22;
    cout << p1.first << " " << p1.second << endl;

    // ? pairs is used for maintaining the relation bet two data type

    pair<int, int> p_array[3];
    // p_array[0]={2,3};
    cout << "<int , int>\n";
    cin >> p_array[0].first; // taking the input from user
    cin >> p_array[0].second;
    p_array[1] = {4, 5};
    p_array[2] = {6, 7};
    swap(p_array[0], p_array[2]); // !relation is maintained in the array

    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " " << p_array->second << "\n";
    }

    //  instended of array we use vector
    //   ! swaping data;
    pair<char, int> pair1 = make_pair('A', 1);
    pair<char, int> pair2 = make_pair('B', 2);

    cout << "Before swapping:\n ";
    cout << "Contents of pair1 = " << pair1.first << " "
         << pair1.second;
    cout << "Contents of pair2 = " << pair2.first << " "
         << pair2.second;

    pair1.swap(pair2); // ? swaping

    cout << "\nAfter swapping:\n ";
    cout << "Contents of pair1 = " << pair1.first << " "
         << pair1.second;
    cout << "Contents of pair2 = " << pair2.first << " "
         << pair2.second;

    //     ! tie function
    pair<int, int> pair1 = {1, 2};
    int a, b;
    tie(a, b) = pair1;
    cout << a << " " << b << "\n";

    pair<int, int> pair2 = {3, 4};
    tie(a, ignore) = pair2;

    // prints old value of b
    cout << a << " " << b << "\n";

    // Illustrating pair of pairs
    pair<int, pair<int, char>> pair3 = {3, {4, 'a'}};
    int x, y;
    char z;

    // tie(x,y,z) = pair3; Gives compilation error
    // tie(x, tie(y,z)) = pair3; Gives compilation error
    // Each pair needs to be explicitly handled
    x = pair3.first;
    tie(y, z) = pair3.second;
    cout << x << " " << y << " " << z << "\n";

    return 0;
}