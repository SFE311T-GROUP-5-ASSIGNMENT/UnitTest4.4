#pragma once
#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "ATM_Account.h"
#include <iostream>
#include <string>

class SavingsAccount :public Account
{
private:
   double annualInterestRate; //this variable will store the annual interest rate
   //double interestRate;


public:
    //default constructor
    SavingsAccount()
    {
        annualInterestRate = 35;

    }

    //SavingsAccount(double);
    ~SavingsAccount();

    //Accessors
    double getMonthlyInterestRate();
    double getMonthlyInterest(double,double);
    //Modifiers
    //void setMonthlyInterestRate();
    //void setMonthlyInterest(double);
};

SavingsAccount::~SavingsAccount()
{

}
double SavingsAccount::getMonthlyInterestRate()
{

    return (annualInterestRate / 100) / 12;
}
double SavingsAccount::getMonthlyInterest(double interestRate, double bal)
{
    bal += bal * interestRate;
    return bal;
}

#endif // SAVINGSACCOUNT_H
