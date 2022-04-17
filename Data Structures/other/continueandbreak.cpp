#include <iostream>
using namespace std;

int main()
{
    int i;
    // cin>>i;
    for (i = 0; i < 10000; i++)
    {

        if (i == 5)
        {
            break;
            //break = Loop ends 
            // Contine= only that Terninated
        }
        //  if (i == 5)
        //  {
        //     continue;
        //     //break = Loop ends 
        //     // Contine= only that Terninated
        //  }
        cout << i << endl;
    }

    return 0;
}