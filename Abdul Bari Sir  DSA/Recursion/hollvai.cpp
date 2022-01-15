#include <iostream>
using namespace std;

void TOH(int n, int A, int B, int C)
{
    if (n > 0) // mistake scope
    {
        TOH(n - 1, A, C, B);                     //    trick    (n , A , B , C )   TO  (n-1 , A , C, B)
        cout << "( " << A << " to " << C << " )" << endl; //mistake scope A TO C
        TOH(n - 1, B, A, C);                    //     trick    (n, A, B, C)   TO      (n - 1, B, A, C)   
    }
}

int main()
{
    int n;
    cout << "Enter the no. of disk :: ";
    cin >> n;
    TOH(n, 1, 2, 3);

    return 0;
}