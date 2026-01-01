#ifndef BANKSERVICE_H
#define BANKSERVICE_H

#include <string>
#include <vector>

#include "models/User.h"
#include "models/Account.h"

class BankService
{
private:
    std::vector<User> users;
    std::vector<Account> accounts;

    int nextUserId;
    int nextAccountNumber;

public:
    BankService();
    User createUser(const std::string &name, int pin);
    Account CreateAccount(int userId);
};
#endif