#include <iostream>
#include <string>
using namespace std;
int roll_no = 0;
int no_of_student;

class marks
{

public:
    int phy, chem, math;

    int rollno_f()
    {
    }
    void name()
    {
        string name_arr[no_of_student];
        cout << "Enter Ur name :: ";
        cin >> name_arr[roll_no];
    }
    void mark_f()
    {
        
        cout << endl;
        cout << "Enter Marks of Chemistry  :: ";
        cin >> chem;
        cout << endl;
        cout << "Enter Marks of Maths  :: ";
        cin >> math;
        cout << endl;
    }
};

class physics : public marks
{
        cout << "Enter Marks of Physics  :: ";
        cin >> phy;
        chem_arr[roll_no];

};
class chem : public marks
{
};
class maths : public marks
{
};

int main()
{

    // cout << "Enter The No. of users :: ";
    // cin >> n;

    return 0;
}