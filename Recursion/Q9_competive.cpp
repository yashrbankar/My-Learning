#include <iostream>
using namespace std;

int main()
{
    int playerno, no_of_player, i, j, n, w, avge, winn;
    cout << " Enter no player :";
    cin >> no_of_player;
    cout << endl;
    int avg[no_of_player];

    int data[no_of_player][3];
    for (i = 0; i < no_of_player; i++)
    {
        cout << "Player no:" << i + 1 << endl;
        for (j = 0; j < 3; j++)
        {
            cin >> data[i][j];
        }
    }

    for (n = 0; n < no_of_player; n++)
    {
        // cout<<"Player no"<<n+1<<" : ";

        avge = ((data[n][0] + data[n][1] + data[n][2]) / 3);
        avg[n] = avge;
        cout << endl;
    }
    int max_pts = -1000000, index;
    for (i = 0; i < no_of_player; i++)
    {
        if (max_pts < avg[i])
        {
            max_pts = avg[i];
            index = i;
            winn = index + 1;
        }
    }
    cout<<" ______ Congralations________ "<<endl<<endl;
    
    
    cout << "THE Average of winner :" << max_pts << endl;

    cout <<"Player no. : "<<winn << "  is  Winner";

    

    return 0;
}