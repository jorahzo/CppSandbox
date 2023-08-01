//
//  BankAccount.cpp
//  BankAccount
//
//  Created by George Peshkov on 7/31/23.
//

#include "BankAccount.hpp"
#include <iostream>

float BankAccount::deposit(float depositAmount){
    accountBalance += depositAmount;
    std::cout << "Depositing " << depositAmount << "\n";
    std::cout << "New total is " << accountBalance << "\n";
}

