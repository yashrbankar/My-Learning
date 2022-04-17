#include <iostream>
#include <string>
using namespace std;

class Member
{
public:
    string Name, Address;
    float Salary;
    double Phone_no;
    int Age;
    printSalary()
    {
        cout<<"Salary :: "<<Salary<<endl;
    }
};

class Employee : public Member
{
public:
    string specialization;
};
class Manager : public Member
{
public:
    string department;
};

int main()
{
    Employee yash;
    yash.Age = 19;
    yash.Phone_no = 123456;
    yash.Address = "Bmt";
    yash.Name = "YB";
    yash.specialization = "Computer";
    yash.Salary = 134500;
    yash.printSalary();

    Manager ronit;
    ronit.Age = 19;
    ronit.Phone_no = 123456;
    ronit.Address = "Bmt";
    ronit.Name = "RK";
    ronit.department = "Computer";
    ronit.Salary = 10000;
    
    ronit.printSalary();

    return 0;
}