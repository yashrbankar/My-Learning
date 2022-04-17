#include <bits/stdc++.h>
#include <string>
using namespace std;
int acc = 124200;
int n1 = 20;
int count_m=1;

// class for money statement used for storing the history of each account

class Money_statement
{
    public:
    string type;
    int amount;
    string r_name;
    int r_account;
    Money_statement *next;
    
};

// class node for linkedlist data storing 

class Node
{
public:
    Node *next;
    Money_statement *history; // for creating the hybrid joint;
    Money_statement *tail;
    int account_no;
    string name;
    int adhar_no;
    string address;
    int phone_no;
    int pin;
    int balance;
};


// all function are declared in this class 

class Bank
{
public:
    Node *first, *last;

    // Bank function
    int create_acc();
    void withdraw(Node *);
    void deposite(Node *);
    int money_transfer();
    int update();
    Node *login();

    // backend function
    Bank();
    int lobby();
    int pin();
    int display();
    Node *search(int);
    void money_statement_display(Node*);
    
};

// to display money statemet;
void Bank::money_statement_display(Node *temp)
{
    string type;
    Money_statement *temp_money;
    cout<<"--------Money statement-----------"<<endl;
    cout<<endl;
    temp_money=temp->history;
    while (temp_money!=NULL)
    {
        if (temp_money->type=="withdraw")
        {
            cout<<count_m++<<"."<<endl;
            cout<<"Transtion type :: Withdraw"<<endl;
            cout<<"amount ::"<<temp_money->amount<<endl;
            cout<<endl;
        }
        else if (temp_money->type=="deposite")
        {
            cout<<count_m++<<"."<<endl;    
            cout<<"Transtion type :: Deposite"<<endl;
            cout<<"amount ::"<<temp_money->amount<<endl;
            cout<<endl;
        }
        else
        {

        }
        temp_money=temp_money->next;
    }
}


// costructer 

Bank::Bank()
{

    // this is admin
    first = new Node;
    first->account_no = acc;
    acc++;
    first->pin = 1212;
    first->address = "admin";
    first->name = "admin";
    first->adhar_no = 0;
    first->next = NULL;
    first->phone_no = 1200;
    first->balance = 0;
    last = first;
    lobby();
}

// Lobby

int Bank::lobby()
{

    int key = 0, start;
    Node *check;
    char choice;
    cout << "enter 1 for login" << endl;
    cout << "enter 2 for creating new account" << endl;
    cout << "Enter the correct key :: ";
    cin >> start;
    if (start == 1)
    {
        check = login();
        if (check)
        {
            do
            {
                cout << "PNB Bank" << endl;
                cout << "------------------------------" << endl;
                cout << "------------------------------" << endl
                     << endl;
                cout << endl;
                cout << "enter 1 to Money withdraw" << endl;
                cout << "enter 2 to Money deposite" << endl;
                cout << "enter 3 to Money statement " << endl;
                cout << "enter 0 to Exit" << endl;

                cout << endl;
                cout << "enter the correct key ::";
                cin >> key;
                switch (key)
                {

                case 1:
                    withdraw(check);
                    break;
                case 2:
                    deposite(check);
                    break;
                case 3:
                    money_statement_display(check);
                    break;
                case 0:
                    return 0;
                    break;
                default:
                    cout << "enter valid key \n";
                    break;
                }

                cout << "if you want to contine press (y/n) :: ";
                cin >> choice;
                if (choice=='n' || choice=='N')
                {
                    lobby();
                }
                
            } while (choice == 'y' || choice == 'Y');
        }
    }
    else if (start == 2)
    {

        create_acc();
        cout << "Do you want to contine (y/n) :: " << endl;
        cin >> choice;
        if (choice == 'y' || choice == 'Y')
        {
            lobby();
        }

    }
    else
    {
        cout << "invalid" << endl;
    }
}

Node *Bank::login()
{
    int acc, pass;

    cout << "Enter the Account No ::";
    cin >> acc;

    cout << "Enter the Pin ::";
    cin >> pass;

    Node *temp = search(acc);
    if (temp == NULL)
    {
        cout << "Acount not found" << endl;
        return login();
    }
    else
    {
        if (pass == temp->pin)
        {
            cout << "Login Sucessful" << endl;
            return temp;
        }
        else
        {
            cout << "Incorect Password";
        }
    }
}

int Bank::pin()
{
    int p;
    cout << " please set 4 digit ATM code  :: ";
    cin >> p;
    while (p > 9999 || 1000 > p)
    {
        cout << "please enter 4 digit pin :: ";
        cin >> p;
    }
    return p;
}

//  update info 
 int Bank::update()
{
    int key=0;
    cout<<"";
}


int Bank::create_acc()
{
    Node *temp;

    temp = new Node;
    cout << "Enter your full name ::";
    getline(cin >> ws, temp->name);
    cout << "Enter your Address :: ";
    getline(cin >> ws, temp->address);
    cout << "Enter your Adhar card no :: ";
    cin >> temp->adhar_no;
    cout << "Enter your phone no :: ";
    cin >> temp->phone_no;

    temp->balance=10000;
    temp->pin = pin();
    temp->account_no = acc;
    cout << "your account :: " << acc << endl;
    acc++;

    //  creating joint node 
    temp->history=new Money_statement;
    temp->history->amount=10000;
    temp->history->type="deposite";
    temp->tail=temp->history;
    temp->history->next=NULL;
    // displaying it
   

    last->next = temp;
    temp->next = NULL;
    last = temp;
}



int Bank::display()
{
    Node *p = first;
    while (p)
    {
        cout << p->name << endl;
        p = p->next;
    }
    cout << endl;
}

void Bank::withdraw(Node *t)
{
    int amount = 0;
    cout << "Enter amount to be withdraw" << endl;
    cin >> amount;
    if (amount < t->balance)
    {
        t->balance = t->balance - amount;
        cout << "Amount withdraw sucessful" << endl;
        cout << "Amount :: " << amount << endl;
        cout << "Amount Balance :: " << t->balance << endl;

        // money statement
        Money_statement* temp_money;
        temp_money=new Money_statement;
        temp_money->amount=amount;
        temp_money->type="withdraw";
        temp_money->next=NULL;
        t->tail->next=temp_money;
        t->tail=temp_money;
    }
    else
    {
        cout << "Insufficant balance" << endl;
    }
}
void Bank::deposite(Node *t)
{
    int amount = 0;
    cout << "Enter amount to be Deposite" << endl;
    cin >> amount;
    t->balance = t->balance + amount;
    cout << "Amount Deposite sucessful" << endl;
    cout << "Amount :: " << amount << endl;
    cout << "Amount Balance :: " << t->balance << endl;

     // money statement
        Money_statement* temp_money;
        temp_money=new Money_statement;
        temp_money->amount=amount;
        temp_money->type="deposite";
        temp_money->next=NULL;
        t->tail->next=temp_money;
        t->tail=temp_money;
}

Node *Bank::search(int check)
{
    Node *temp = first;

    while (temp != NULL)
    {
        if (temp->account_no == check)
        {
            return temp;
        }
        temp = temp->next;
    }
    return temp;
}

int main()
{
    Bank obj;
    return 0;
}
