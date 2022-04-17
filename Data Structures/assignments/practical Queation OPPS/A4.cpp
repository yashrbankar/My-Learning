#include <iostream>
using namespace std;

class Calculator{
    int a, b;
    public:
    void getdata();
    int add();
    int sub();
    int prod();
    int div();
};
void Calculator::getdata(){
    cout<<"Enter your first number:";
    cin>>a;
    cout<<endl;
    cout<<"Enter your second number:";
    cin>>b;
}
int Calculator::add(){
	int s=a+b;
    return s;
}
int Calculator::sub(){
	int d=a-b;
    return d;
}
int Calculator::prod(){
	int m=a*b;
    return m;
}
int Calculator::div(){
    if (b==0){
        cout<<"Invalid division"<<endl;
    }
    else if (a==0 && b==0 ){
        cout<<"Invalid"<<endl;
    }
    else{
    	int d=a/b;
        return d;
    }
}
int main(){
    char z;
    do
    {
    cout<<"Enter the symbol of operation you want to perform : "<<endl;
    cout<<"1.Add(+)\n2.Subtraction(-)\n3.Multiplication(*)\n4.Division(/)\n5.Exit(e)"<<endl;
    cin>>z;
    if (z=='e')
    {
        cout<<"Exiting"<<endl;
        break;
    }
    else{
    Calculator x;
    x.getdata();
    switch(z){
        case '+':
        cout<<"Result= "<<x.add()<<endl;
        break;
        case '-':
        cout<<"Result= "<<x.sub()<<endl;
        break;
        case '*':
        cout<<"Result= "<<x.prod()<<endl;
        break;
        case '/':
        cout<<"Result= "<<x.div()<<endl;
        break;
    }
    }
    }
    while(z!='e');
return 0;
}
