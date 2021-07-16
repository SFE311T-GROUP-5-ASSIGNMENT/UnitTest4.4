#ifndef ATM_ACCOUNT_H
#define ATM_ACCOUNT_H

#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

class Account
{

protected:

    int ID;
    double balance;
    string dateCreated;


public:
    Account() { ID = 00000; balance = 0.00;}
    ~Account();

void setID(int);
void setBalance(double);
int getID();
double getBalance();

void withdraw(double);
void deposit(double);

};
Account::~Account()
{

}
void Account::setID(int accNo)
{
    ID = accNo;
}

void Account::setBalance(double Bal)
{
    balance = Bal;
}
int Account::getID()
{
    return ID;
}
double Account::getBalance()
{
    return balance;
}
void Account::withdraw(double wdraw)
{
    if (balance >= wdraw) {
        wdraw = balance - wdraw;
        cout << "Your current balance is: " << wdraw << endl;
    }
    else {
        cout << "No money" << endl;
    }

}
void Account::deposit(double dep)
{
    balance = dep + balance;
    cout << "Your current balance is: R" << balance << endl;
}

#endif // ATM_ACCOUNT_H
