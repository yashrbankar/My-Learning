#include<iostream>
#include<fstream>
using namespace std;

class student
{
    public:

    string name;
    int roll;
    string branch;
    
    friend ofstream & operator<<(ostream &ost,student &s);
    friend ifstream & operator>>(ifstream &ist,student &s);

};

ofstream & operator<<(ofstream &ost,student &s)
{
    cout<<"information taken "<<endl;
    ost<<s.name<<endl;
    ost<<s.roll<<endl;
    ost<<s.branch<<endl;
    return ost;
}

ifstream & operator>>(ifstream &ifs,student &s)
{
    
    ifs>>s.name;
    ifs>>s.roll;
    ifs>>s.branch;
    return ifs;
}


int main()
{

    student s1;
    cout<<"enter name :: ";
    cin>>s1.name;
    cout<<"enter roll no :: ";
    cin>>s1.roll;
    cout<<"enter branch :: ";
    cin>>s1.branch;

    ofstream ost("student.txt", ios::app);
    ost<<s1;
    ost.close();

    ifstream ifs("student.txt", ios::app);
    ifs>>s1;
    cout<<"name : "<<s1.name<<endl;
    cout<<"roll : "<<s1.roll<<endl;
    cout<<"branch : "<<s1.branch<<endl;

   return 0;
}