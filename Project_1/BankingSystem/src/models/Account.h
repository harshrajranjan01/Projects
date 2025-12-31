#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
private:
    int accountNumber;
    double balance;

public:
Account(int accountNumber,double balance);

bool deposite(double amount);

bool withdraw(double amount);

double getBalance() const;

int getAccountNumber() const;

};
#endif