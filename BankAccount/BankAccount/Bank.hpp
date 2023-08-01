//
//  Bank.hpp
//  BankAccount
//
//  Created by George Peshkov on 7/31/23.
//

#ifndef Bank_hpp
#define Bank_hpp

#include <stdio.h>
#include <vector>
#include "BankAccount.hpp"

class Bank{
public:
    void addAccount();
    void accessAccount();
    void displayAccounts();
    void exitProgram();
private:
    std::vector<BankAccount> accounts;
};

#endif /* Bank_hpp */
