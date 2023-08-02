//
//  BankAccount.hpp
//  BankAccount
//
//  Created by George Peshkov on 7/31/23.
//

#ifndef BankAccount_hpp
#define BankAccount_hpp

#include <stdio.h>
#include <string>
#include "Bank.hpp"

class BankAccount: public Bank{
public:
    BankAccount(std::string accountNumInput, float balanceInput) : accountNumber(accountNumInput), accountBalance(balanceInput) {};
    void deposit(float depositAmount);
    void withdraw(float withdrawAmount);
    void display();
    std::string getAccountNumber();
private:
    std::string accountNumber;
    float accountBalance;
};

#endif /* BankAccount_hpp */
