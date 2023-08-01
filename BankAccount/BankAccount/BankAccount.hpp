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
    float deposit(float depositAmount);
    float withdraw();
    void display();
private:
    std::string accountNumber;
    float accountBalance;
};

#endif /* BankAccount_hpp */
