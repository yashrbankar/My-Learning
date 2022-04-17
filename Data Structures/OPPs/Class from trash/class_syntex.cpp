#include <iostream>
using namespace std;

class classname
{
    // private varib;es 
    int var1, var2 ,var3 , var4;

    //friend function
    // friend name of funcrion

public:
    // contractors or functions ;
    // contractors
      int 

      classname(int varno1, int varno2)
      {
        var1 = varno1;
        var2 = varno2; // the of parameter give to varible in class
      }

    // func 
    int function(int varno3  , int varno4)//; outside class delaration // int  classname :: function name (){}
    {
        var3=varno3;
        var4=varno4;

    }
    void display()
    {
        // opreation to be done

        cout << "Addition : " << var1 + var2;
    }
    void display1()
    {
        // opreation to be done

        cout << "Addition : " << var4 + var3;
    }
};

int main()
{
    // varible in main function
    // for input
    int a, b, c,d;
    cout << "Enter Values : " << endl;
    cin >>a >> b;
    cin>>c>>d;

    // calling class  @  creating obj ;

    classname obj1 , obj2;
    classname (a , b);
    
    
    obj1.display();
    obj2.function(c , d);
    obj2.display1();



    return 0;
}