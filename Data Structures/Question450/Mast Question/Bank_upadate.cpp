#include <bits/stdc++.h>
#include <string>
using namespace std;
int acc = 124200;
int n1 = 20;

class Node
{
public:
    Node *next;
    int account_no;
    string name;
    int adhar_no;
    string address;
    int phone_no;
    int pin;
    int balance;
};

class Bank
{
public:
    Node *first, *last;
    // Bank function
    int create_acc();
    int withdraw();
    int deposite();
    int money_transfer();
    int update();

    // backend function
    Bank();
    int lobby();
    int pin();
    Node *search(int, char);
};

Bank::Bank()
{
    // this is admin
    first = new Node;
    first->account_no = acc;
    acc++;
    first->pin = 1212;
    first->address = 'A';
    first->name = 'a';
    first->adhar_no = 0;
    first->next = NULL;
    first->phone_no = 1200;
    first->balance = 0;
    last = first;
    lobby();
}

int Bank::pin()
{
    int p;
    cout << " please set 4 digit ATM code  :: ";
    cin >> p;
    while (p > 9999 || 1000 > p)
    {
        int t;
        cout<<"please enter 4 digit pin :: ";
        cin >> t;
        p=t;
    }
    return p;
}

int Bank::create_acc()
{
    Node *temp;
    temp = new Node;
    cout << "Enter your full name ::";
    getline(cin>>ws , temp->name);
    cout << "Enter your Address :: ";
    getline(cin>>ws , temp->address);
    cout << "Enter your Adhar card no :: ";
    cin >> temp->adhar_no;
    cout << "Enter your phone no :: ";
    cin >> temp->phone_no;
    cout << " please deposite some amount in your account :: ";
    cin >> temp->balance;
    temp->pin = pin();
    temp->account_no = acc;
    acc++;
    last->next = temp;
    temp->next = NULL;
    last = temp;
}

int Bank::lobby()
{

    int key = 0;
    char choice;
    do
    {
        cout << "PNB Bank" << endl;
        cout << "------------------------------" << endl;
        cout << "------------------------------" << endl
             << endl;
        cout << endl;
        cout << "enter 0 to for Exit" << endl;
        cout << "enter 1 to for creating new account " << endl;

        cout << endl;
        cout << "enter the correct key ::";
        cin >> key;
        switch (key)
        {

        case 1:
            create_acc();
            break;

        default:
            cout << "enter valid key \n";
            break;
        }

        cout << "if you want to contine press (y/n) :: ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
}

Node *Bank::search(int check, char type)
{
    Node *temp = first;
    if (type == 'a')
    {
        while (temp != NULL)
        {
            if (temp->account_no == check)
            {
                return temp;
            }
            else
            {
                temp = temp->next;
            }
        }
        return temp;
    }
    if (type == 'p')
    {
        while (temp != NULL)
        {
            if (temp->phone_no == check)
            {
                return temp;
            }
            else
            {
                temp = temp->next;
            }
        }
        return temp;
    }
}

int main()
{
    Bank obj;

    return 0;
}
