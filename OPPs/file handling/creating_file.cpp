#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream ost("my.txt", ios::trunc); // output streaam for creating the file
    ost<<"Yash"<<endl; // addting data in the file 
    ost<<43<<endl;
    ost<<"cs"<<endl;
    ost.close();

    ifstream ifs("my.txt");
    
    int roll;
    string name , branch;
    ifs>>name>>roll>>branch;
    
    cout<<"name : "<<name<<endl;
    cout<<"roll : "<<roll<<endl;
    cout<<"branch : "<<branch<<endl;
   return 0;
}