#include "BankService.h"

BankService::BankService()
    : nextUserId(1), nextAccountNumber(1001) {}

// Create a new user

User BankService::createUser(const std::string &name, int pin)
{
    User user(nextUserId, name, pin);
    users.push_back(user);
    nextUserId++;
    return user;
}

// Create a new account for a user
Account BankService::CreateAccount(int userId)
{
    Account account(nextAccountNumber, 0.00);
    accounts.push_back(account);
    nextAccountNumber++;
    return account;
}

bool BankService::login(int userId, int pin) const
{
    for (const User &user : users)
    {
        if (user.getUserId() == userId)
        {
            return user.verifyPin(pin);
        }
    }
    return false;
}