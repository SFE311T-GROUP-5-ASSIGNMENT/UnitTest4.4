#include "ATM_Account.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"
#include <QString>
#include <QtTest>
#include <QCoreApplication>

class AtmtestTest : public QObject
{
    Q_OBJECT

public:
    AtmtestTest();

private Q_SLOTS:
    //void testCase1_data();
    //void testCase1();
    void withdrawTest();
    void depositTest();
    void CreateAccounttest();
    void interestRateTest();
    void monthlyInterestTest();
    void overdraftlimitTest();
};

AtmtestTest::AtmtestTest()
{
}

void AtmtestTest::depositTest(){
    Account accnt;
    accnt.setID(1111);
    accnt.setBalance(0.00);
    accnt.deposit(500.00);
    QVERIFY(accnt.getBalance()==500.00);
}

void AtmtestTest::withdrawTest(){

    Account accnt1;
    accnt1.setID(2222);
    accnt1.setBalance(0.00);
    accnt1.deposit(500.00);
    accnt1.withdraw(50.00);
    QVERIFY(accnt1.getBalance()==450.00);
}

void AtmtestTest::CreateAccounttest(){
    //Check if account succesfully set
    Account accnt;
    accnt.setID(3333);
    accnt.setBalance(500.00);
    QVERIFY(accnt.getID()==3333 && accnt.getBalance()==500.00);

}

void AtmtestTest::interestRateTest(){
    SavingsAccount sve;
    QVERIFY(sve.getMonthlyInterestRate()==((35 / 100) / 12));
}

 void AtmtestTest::monthlyInterestTest(){

     SavingsAccount sve;
     Account accnt;
     double rate;
     double  bal;
     double interests;
     sve.setBalance(5000.00);
     bal = sve.getBalance();
     rate = sve.getMonthlyInterestRate();

     sve.setID(1111);
     interests= sve.getMonthlyInterest(rate, bal);
     QVERIFY(interests == (bal+=bal*rate));

 }

 void AtmtestTest::overdraftlimitTest(){
     CheckingAccount check;
     //check.setOverdraftlimit();
 }

QTEST_MAIN(AtmtestTest)

#include "tst_atmtesttest.moc"
