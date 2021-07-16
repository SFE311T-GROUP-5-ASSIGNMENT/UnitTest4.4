#pragma once
#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include "ATM_Account.h"
#include <iostream>
#include<string>

using namespace std;

class CheckingAccount:public Account
{
private:
    double overdraft; //variable to store the overdraft limit

public:
    //default constructor
    CheckingAccount();
    ~CheckingAccount();


//Accessor
    double getOverdraftlimit()
    {
        return overdraft;
    }

    //Modifier
    void setOverdraftlimit(int ovd)
    {
        overdraft = ovd;
    }
    //method
    void Overdraft(double,double);

};

CheckingAccount::CheckingAccount()
{
    overdraft = 0.0;
}
CheckingAccount::~CheckingAccount()
{
}

void CheckingAccount::Overdraft(double bal,double wdraw)
{

    wdraw = balance - wdraw;
    if (balance >= 0) {
        cout << "Your Current Account Balance is " << balance << endl;
    }
    else if (balance < 0) {
        overdraft = wdraw + overdraft;
    }
    else {
        if (wdraw >= overdraft)
        {
            cout << "Try again" << endl;
        }
        else {
            cout << "You passed your overdraftlimit" << endl;
        }
    }

}
#endif // CHECKINGACCOUNT_H
