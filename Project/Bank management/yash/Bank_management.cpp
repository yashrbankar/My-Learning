#include <bits/stdc++.h>
using namespace std;

class Info
{
public:
    string name, address;
    long long account_no, phoneno, adhar;
    int balance = 10000, transtion_limit = 10000;
    int pin;
};

class Bank
{

public:
    void create_acc();
    void lobby();
    int login();
    bool isempty();
    void write_data_into_file(Info);
    long long find_last_acc();
    int check_accno(long long);
    int pin();
    Bank()
    {
        lobby();
    }
};

int main()
{
    Bank obj;
    return 0;
}

int Bank::login()
{
    cout << "------------------------------------------------------------------------\n";
    cout << "             ------------------ Login -------------------               \n";
    cout << "------------------------------------------------------------------------\n";
    long long acc;
    int acc_check;
    int pass;
    cout << "Enter your account number ::";
    cin >> acc;
    acc_check = check_accno(acc);

    if (acc_check == -1)
    {
        cout << "Enter correct account number";
        login();
    }

    cout << "Enter Password ::";
    cin >> pass;
}

int Bank::check_accno(long long acc)
{
    fstream check_acc("bank_database.cvs", ios::in);
    string row;
    long long test_acc;

    while (getline(check_acc, row, '\n'))
    {
        if (row.length() != 0) // this skips blanck lines in thd file(if read blank line then stol will trow error)
        {

            test_acc = stoll(row);
            if (test_acc == acc)
            {
                return 1;
            }
        }
    }
    return -1;
}

void Bank::lobby()
{
    cout << "------------------------------------------------------------------------\n";
    cout << "           ------------------- Bank Function ------------------           \n";
    cout << "------------------------------------------------------------------------\n";

    char choice;
    int key;
    cout << "Enter 1 to login  " << endl;
    cout << "Enter 2 to create new account " << endl;

    cout << "Enter correct key to proceed ::";
    cin >> key;
    if (key == 1)
    {
        login();
    }
    else
    {
        create_acc();
    }
}

void Bank::create_acc()
{
    Info temp_acc;
    cout << "Enter your full name :: " << endl;
    getline(cin, temp_acc.name);
    cout << "Enter your address ::" << endl;
    getline(cin, temp_acc.address);
    cout << "Enter your phone number  ::" << endl;
    cin >> temp_acc.phoneno;
    while (true) // exception handling
    {
        if (cin.fail())
        {
            cin.clear();
            cout << "invaild input " << endl;
            cin.ignore();
            cin >> temp_acc.phoneno;
        }
        else
        {
            break;
        }
    }

    cout << "Enter your adhar card number  ::" << endl;
    cin >> temp_acc.adhar;
    while (true)
    {
        if (cin.fail())
        {
            cin.clear();
            cout << "invaild input " << endl;
            cin.ignore();
            cin >> temp_acc.adhar;
        }
        else
        {
            break;
        }
    }
    long check_accno;
    check_accno = find_last_acc();
    if (check_accno == -1)
    {
        temp_acc.account_no = 1212420001;
    }
    else
    {
        temp_acc.account_no = check_accno;
    }
    write_data_into_file(temp_acc);
    int p;
    p = pin();
    temp_acc.pin = p;

    cout << "Account created sucessfully created " << endl;
    cout << "Account number :- " << temp_acc.account_no << endl;
}

void Bank::write_data_into_file(Info temp_acc)
{
    fstream write("bank_database.csv", ios::app);
    write << temp_acc.account_no << temp_acc.pin << "," << temp_acc.name << "," << temp_acc.address << "," << temp_acc.balance << "," << temp_acc.adhar << "," << temp_acc.transtion_limit << ","
          << "\n";
    write.close();
}

long long Bank::find_last_acc()
{

    fstream find_acc;
    find_acc.open("bank_database.csv", ios::in);

    if (isempty())
    {
        return -1;
    }
    else
    {
        string line;
        long long acc_no;

        while (!find_acc.eof())
        {
            getline(find_acc, line, '\n');
            // acc_no = stol(line);
            if (line.length() != 0) // this skips blanck lines in thd file(if read blank line then stol will trow error)
            {
                acc_no = stoll(line);
            }
        }
        return acc_no + 1;
    }
    find_acc.close();
}

bool Bank::isempty()
{
    int length;
    fstream obj1;
    obj1.open("bank_database.csv", ios::in);
    obj1.seekg(0, ios::end);
    length = obj1.tellg();
    obj1.close();
    if (length == 0 || length == -1)
    {
        return true;
    }
    return false;
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
