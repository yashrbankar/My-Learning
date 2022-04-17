#include <iostream>
#include<string>
using namespace std;


class personal
{
    protected:
    string name;
    int age;
    
    
};

class academic
{
    protected:
    float result ;
    string degree;

};

class professsion
{
    protected:
    string designation;
    float experience;


};

class biodata : public personal, public academic, public professsion
{

    public:
    void get()
    {
        cout<<"Enter ur name  :: "<<endl;
        cin>>name;
        cout<<"Enter age :: "<<endl;
        cin>>age;
        cout<<"Enter ur result   :: "<<endl;
        cin>>result;
        cout<<"Enter ur Degree :: "<<endl;
        cin>>degree;
        cout<<"Enter  designation  :: "<<endl;
        cin>>designation;
        cout<<"Enter ur previous Experiences  :: "<<endl;
        cin>>experience;
        

    }

    void display()
    {
        cout<<"______________________________";
        cout<<"______________________________"<<endl;
        cout<< "Name ::" << name <<endl ;
        cout<< " Age :: " << age  <<endl;
        cout<< " Result :: " << result <<endl;
        cout<< " Degree :: " << degree <<endl;
        cout<< " designation :: " << designation<<endl ;
        cout<< " Experience :: " << experience<<endl ;
        cout<<"______________________________"<<endl;
        cout<<"______________________________"<<endl;

    }
};

int main()
{
    biodata a ;
    a.get();
    a.display();

    return 0;
}