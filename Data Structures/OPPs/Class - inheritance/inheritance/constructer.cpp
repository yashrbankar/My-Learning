// C++ program to implement
// Multilevel Inheritance
#include <iostream>
using namespace std;

// base class
class Vehicle
{
public:
    int A;

    Vehicle()
    {
        cout << "Objects are vehicles " << endl; // mistake bugs :: NOT This called by the fu
    }

    fourWheeler()
    {
        cout << "1234567890" << endl;
    }
};

// first sub_class derived from class vehicle
class fourWheeler : public Vehicle
{
public:
    fourWheeler()
    {
        cout << "Objects with 4 wheels are vehicles" << endl;
    }
};
// sub class derived from the derived base class fourWheeler
class Car : public fourWheeler
{
public:
    Car(int a)
    {
        A = a;
        cout << A << endl;
    }
};

// main function
int main()
{
    //creating object of sub class will
    //invoke the constructor of base classes
    Car obj(34);
    return 0;
}
