#include<iostream>
#include <string>
using namespace std;

// hierchiral Inheritances 

class Publication
{
    public:
    string title;
    float price=0;
    void getdata_Pub()
    {
        cout<<"Title :: ";
        cin>>title;
        cout<<"Price :: ";
        cin>>price;
    }
    void putdata_Pub()
    {
        cout<<"Title ::"<<title<<endl;
        cout<<"Price ::"<<price<<endl;
    }

};

class Book:public Publication
{
    int count;
    public:
    void getdata_Book()
    {
        cout<<"count :: ";
        cin>>count;
    }
    void putdata_book()
    {
        cout<<"count::"<<count<<endl;
    }



};
class Tape:public Publication
{
    float minutes ;
    public:
   void getdata_Tapes()
    {
        cout<<"minutes :: ";
        cin>>minutes;
    }
    void putdata_Tapes()
    {
        cout<<"minutes:: "<<minutes<<endl;
    }
};

int main()
{
    Tape Audio;
    Audio.getdata_Pub();
    Audio.getdata_Tapes();
///////////////////////////////
    Book pub;
    // pub.getdata_Pub();
    pub.getdata_Book();

//////////////////////////////

    cout<<" Data tape "<<endl;
    Audio.putdata_Pub();
    Audio.putdata_Tapes();

//////////////////////////////////

    cout<<" Data BOOK "<<endl;
    pub.putdata_book();
    
//////////////////////////////////

   return 0;
}