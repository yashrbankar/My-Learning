#include <iostream>
using namespace std;

class Complex{
    int real, img;
    public:
    Complex(){
        real = 0;
        img = 0;
    }

    Complex operator+(Complex);
    Complex operator*(Complex);
    friend void operator <<(ostream &print, Complex&);
    friend void operator >>(istream &scan, Complex&);
};

Complex Complex :: operator+(Complex C2){
    Complex C3;
    C3.real = real + C2.real;
    C3.img  = img + C2.img;
    return C3;
}

Complex Complex :: operator*(Complex C2){
    Complex C3;
    C3.real= (real * C2.real) - (img * C2.img);
    C3.img= (real * C2.img) - (img * C2.real);
return C3;
}

void operator>>(istream&scan, Complex &C){
    cout<<"Enter Real Part: ";
    scan>>C.real;
    cout<<"Enter Imaginary Part: ";
    scan>>C.img;
}

void operator <<(ostream &print, Complex &C){ 
    print<<"Result : "<<C.real<<"+ "<<C. img<<"i"<<endl;
}
int main(){
    char c;
    do{
        Complex C1, C2, C3;
        cin>>C1;
        cin>>C2;
        cout<<"\n ....Addition of two complex numbers.... "<<endl;
        C3=C1 + C2;
        cout<<C3;
        cout<<"\n....Multiplication of two complex numbers...."<<endl;
        C3=C1*C2;
        cout<<C3;
        cout<<"Do you wish to continue 'Y' or 'y' for yes: ";
        cin>>c;
        } while(c == 'Y' || c == 'y');

return 0;
}
