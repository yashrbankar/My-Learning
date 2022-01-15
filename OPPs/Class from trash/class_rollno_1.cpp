#include<iostream>
using namespace std;

class student
{
    int roll_no ;
    string name ;

    public:
    student(string input_name , int input_rollno)
    {
        cout<<"Const start";
        roll_no =input_rollno;
        name =input_name;

        
    }
    void display()
    {
        cout<<"Student Information"<<endl;
        cout<<name <<endl<<roll_no<<endl;
    }
};

int main()
{
    student jon("jon", 1);
    student ron("ron", 2);


    jon.display();
    ron.display();
  
return 0;
}