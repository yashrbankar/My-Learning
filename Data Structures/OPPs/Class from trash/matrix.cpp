#include <iostream>
using namespace std;

     int i, j , x , y;
    int  matrix1[0][0];
    int  matrix2[0][0];


int mult(int x, int y ,int p , int q)
{
    // matrix1[x][y] * matrix2[x][y]
    if (x<i && y<j && p<i && q<j)
    {

        // cout<<"#" <<endl;
        cout<<endl;
        cout<< matrix1[x][y] * matrix2[p][q] + mult(x ,y+1 , p+1 ,q);
        


    }
    

    

}

int main()
{
   

    cout << " Enter No. of rows ::";
    cin >> i;
    cout << "Enter No. of colum :";
    cin >> j;
    int matrix1[i][j];
    int matrix2[i][j];


    cout << "Enter Elements ";

    // first matrix

    for (int a = 0; a < i; a++)
    {
        cout << endl;
        for (int b = 0; b < j; b++)
        {
            cin >> matrix1[a][b];
        }
    }

     // second matrix

    for (int a = 0; a < i; a++)
    {
        cout << endl;
        for (int b = 0; b < j; b++)
        {
            cin >> matrix2[a][b];          
        }
    }

    mult(0 , 0 , 0 ,0 );

    

    return 0;
}