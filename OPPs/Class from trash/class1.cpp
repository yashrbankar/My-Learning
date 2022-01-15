#include<iostream>
#include<string>
using namespace std;

class phone
{
    // private and public

    // Private varibles only accessble inside the class
    // Public varibles only accessble at all 

    // operation are public at can used in all code
    // varibles may be private or public



    // attributes
    string phone_name;
    string phone_size;
    

    public :
     // Constructer 
    phone(string name , string size){
        phone_name = name ;
        phone_size = size ;
    }

    // operaters
publ
    void makecall()
    {
        cout<<"Make Call From Phone "<< phone_name;

    }
    void receivecall()
    {

        cout<<"Make Call From Phone "<< phone_name;

    }
    
};

int main()
{
    phone phone1("Iphone 11","64");
    phone.makecall();

    


 


return 0;
}