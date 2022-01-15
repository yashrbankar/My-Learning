#include <iostream>
#include <string>
using namespace std;

static int acc = 101;
static int counter = 0;
int acc_nos, pass_s;
// int a==0 must universly declaered  not that

class bank
{
    

    int index;
    int pass;

    string name[10];
    int acc_no[10];
    int pin[10];
    int bal[10];
    int balan;
    int repeat;
    // int;
    int key; // key is simple no to procced next Process

public:

    void exist();
    void search();
    void create_acc();
    void withdraw();
    void deposite();
    void balance();
    void passw();
    void deposite_add();
    void repeat01();
    void atm();
    void acc_info();
    void lobby()
    {

        cout << "____________________________________________" << endl;

        cout << endl;

        cout << "******** Welcome to Yes Bank_ar ********" << endl;
        cout << "____________________________________________" << endl;
        cout << endl;

        cout << "Press '1' :: For creating new Account " << endl;
        cout << "Press '2' :: For Deposite Money  " << endl;
        cout << "Press '3' :: For withdrawing Money " << endl;
        cout << "Press '4' :: For Checking Bank Balance  " << endl;
        cout << "Press '5' :: For Exiting " << endl;

        cout << "Enter Current Key to proceed  ::  ";
        cin >> key;
        

        if (key == 5)
        {
            exist();
            
        }
        if (key == 1)
        {
            // cout << " This is acc if";
            create_acc();
        }
        if (key == 2)
        {
            // cout << " This is depo if";
            deposite();
        }
        if (key == 3)
        {
            // cout << " This is with if";

            withdraw();
        }
        if (key == 4)
        {
            // cout << " This is bal if";
            balance();
        }

    }
};

// reapeate after func asked to continue or onot

void bank::repeat01()
{
    cout << "Enter 0 for exit" << endl;
    cout << "Enter 1 for menu " << endl;
    cout << "Enter Key ::";
    cin >> repeat;

    if (repeat == 1)
    {
        lobby();
    }
    if (repeat == 0)
    {
        exist();
    }
}

// password
void bank::passw()
{
    cout << " enter Account No :: ";
    cin >> acc_nos;
    cout << endl;
incorrect:
    cout << " enter Password  :: ";
    cin >> pass_s;
    cout << endl;
    // index searching
    search();

    //checking pass
    if (pass_s == pin[index])
    {
        if (key == 2)
        {

            deposite_add();
        }
        if (key == 3)
        {

            atm();
        }
        if (key == 4)
        {
            acc_info();
        }
    }
    else
    {
        cout<<"Incorrect password !!!!!!"<<endl;
        goto incorrect;
    }
}

// searching of index;
void bank::search()
{

    for (int i = 0; i < 10; i++)
    {
        if (acc_no[i] == acc_nos)
        {
            index = i;
            // cout << acc_nos << " index =" << i << endl;
            break;
        }
    }
}

//Exit

void bank::exist()
{
    // cout << "This is Exit " << endl;
    cout << "***  Thank u  *** ";
    cout << endl
         << "*   Vist Again  * " << endl;
    cout << "____________________________________________" << endl
         << endl;
    return;
}

// create new acc

void bank::create_acc()
{
    // cout << "This is new acc " << endl;
    cout << "Enter ur Name :: ";
    cin >> name[counter];
    cout << endl;

    cout << "your Account no is:: ";
    acc_no[counter] = acc;
    cout << acc << endl;

    cout << "enter four digit pin code ::";
    cin >> pass;
    cout << endl;

    pin[counter] = pass;

    cout << "Add Starting Amount in ur account ::";
    cin >> balan;
    bal[counter] = balan;
    cout << endl;
    cout << " Thanks For Creating Account Yes bank_ar " << endl;

    acc++;
    counter++;
    cout << "____________________________________________" << endl
         << endl;

    repeat01();
}

// desposte
void bank::deposite()
{
    

    search();
    passw();

    
}

// deposite money
void bank::deposite_add()
{
    int deposite_add_money;
    cout << "Enter depoiste amount ::";
    cin >> deposite_add_money;
    bal[index] = bal[index] + deposite_add_money;
    cout << "------------------------------------" << endl;
    cout << deposite_add_money << " Rs credited Sucessfully" << endl;
    cout << "------------------------------------" << endl;
    cout << "Your current balance is : " << bal[index] << endl;
    cout << "------------------------------------";
    cout << endl;
    repeat01();
}

// withdraw money

void bank::withdraw()
{
    // cout << "This is withdraw " << endl;
    search();
    passw();
}
void bank::atm()
{
    int withdraw_money;
    cout << "Enter withdraw amount :: ";
    cin >> withdraw_money ;
    bal[index] = bal[index] - withdraw_money;
    cout << "------------------------------------" << endl;
    cout << withdraw_money << " Rs  debited  from ur account" << endl;
    cout << "------------------------------------" << endl;
    cout << "Your current balance is : " << bal[index] << endl;
    cout << "------------------------------------";
    cout << endl;
    repeat01();
}

void bank::balance()
{
    // cout << "This is balance" << endl;
    search();
    passw();
    // lobby();
}
void bank::acc_info()
{
    cout << "Yes bank_ar Shardanagr" << endl;
    cout << "____________________________________________" << endl;
    cout << "____________________________________________" << endl;
    cout << endl;
    cout << "Account no :: " << acc_no[index] << endl;

    cout << "Account name :: " << name[index] << endl;

    cout << "Account Balance :: " << bal[index] << endl;
    cout << "____________________________________________" << endl;
    cout << "____________________________________________" << endl;
    repeat01();
}

int main()
{
    bank yesbank;
    yesbank.lobby();
    
}
