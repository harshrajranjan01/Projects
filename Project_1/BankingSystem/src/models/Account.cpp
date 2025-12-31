#include "Account.h"

Account::Account(int accountNumber, double balance)
    : accountNumber(accountNumber), balance(balance) {};

bool Account::deposite(double amount)
{
    if (amount <= 0)
    {
        return false;
    }

    balance += amount;
    return true;
}

bool Account::withdraw(double amount)
{
    if (amount <= 0 && amount > balance)
    {
        return false;
    }

    balance -= amount;

    return true;
}

double Account::getBalance() const
{
    return balance;
}

int Account::getAccountNumber() const
{
    return accountNumber;
}