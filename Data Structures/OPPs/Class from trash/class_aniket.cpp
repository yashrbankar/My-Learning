#include<iostream>
using namespace std;

class Student
{
    private:

    string name,department;
    int roll_no;

    friend void friend_fun(Student);
    public:
    Student(){

        cout<<"Default Constructor"<< endl ;
    }

    Student(string Name,  int Roll  ,string Depat){  //construter
        
        cout<<"Constructor Call Start"<<endl;
        name=Name;
        roll_no=Roll;
        department=Depat;
        cout<<"Constructor Call Endl"<<endl;

    }

    // void setData(string, int,string);

    void Display(){//inline function;

          cout<<"student Information"<<endl;
          cout<<name<<endl<<roll_no<<endl<<department<<endl;

    }

    

};
void friend_fun(Student x){
    
    cout<<x.name<<endl<<x.roll_no<<endl<<x.department<<endl;

}


// void Student::setData(string x,int y,string z){
//     name=x;
//     roll_no=y;
//     department=z;
// }

int main(){
    // "Style No.1" // Student yash("yash",20143,"computer"), ronit("Ronit",20036,"Computer"),aniket("Aniket",20144, "computer");//Auto Call
    Student aniket1,yash1,ronit1; 
    Student aniket("Aniket1",20144,"Comp");
    Student ronit("Aniket2",20144,"Comp");
    Student yash("Aniket3",20144,"Comp");


    // ronit.setData("Ronit",20036,"Computer");
    // ronit.Display();

    // yash.setData("yash",20143,"computer");
    // aniket.setData("Aniket",20144,"computer");
    aniket.Display();
    ronit.Display();
    yash.Display();
    
    cout<<" Main end "<<  endl  ;
    return 0;
Cout<<jjo;

}