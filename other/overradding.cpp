#include<iostream>
using namespace std;


/*

class A ----> private public protected 
class B : public A ---> public protected 

class A ----> private public protected 
class B : private A ---> private private

class A ----> private public protected 
class B : protected A ---> protected protected

*/

class base
{
    public:
    void greed(){
        cout<<"Good Base"<<endl;
    }

};

class child : public base{
    public:
    void greed(){
        cout<<"Good Child"<<endl;

    }
};

int main()
{
    child Obj;
    Obj.greed();
    // Obj.greed();

    // Obj.base:: greed();  //choice 1  

    base *ptr;
    ptr=&Obj;
    
    ptr->greed();  // choice 2     
    return 0;


}