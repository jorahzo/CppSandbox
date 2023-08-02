//
//  BankAccount.cpp
//  BankAccount
//
//  Created by George Peshkov on 7/31/23.
//

#include "BankAccount.hpp"
#include <iostream>

void BankAccount::deposit(float depositAmount){
    accountBalance += depositAmount;
    std::cout << "Depositing " << depositAmount << "\n";
    std::cout << "New total is " << accountBalance << "\n";
}

void BankAccount::withdraw(float withdrawAmount){
    if (accountBalance - withdrawAmount > 0){
        accountBalance -= withdrawAmount;
        std::cout << "Withdrew $" << withdrawAmount << "\n";
    }
    else {
        std::cout << "Not enough funds for transaction\n";
    }
}

std::string BankAccount::getAccountNumber(){
    return accountNumber;
}

void BankAccount::display(){
    std::cout << "Account number is " << accountNumber << "\n";
    std::cout << "Balance is " << accountBalance << "\n";
}

