//
//  Bank.cpp
//  BankAccount
//
//  Created by George Peshkov on 7/31/23.
//

#include "Bank.hpp"
#include "BankAccount.hpp"
#include <iostream>
#include <string>

void Bank::addAccount(){
    srand(time(NULL));
    std::string accountNumber = std::to_string(10000000 + (rand() % 99999999));
    BankAccount newAccount = BankAccount(accountNumber, 0);
    accounts.push_back(newAccount);
}

void Bank::accessAccount(){
    std::string accountNumber;
    std::cout << "Enter account number\n";
    std::cin >> accountNumber;
    
    for (auto& account : accounts){
        if (account.getAccountNumber() == accountNumber){
            std::cout << "What would you like to do?\n1. Deposit\n2. Withdraw\n3. Display\n4. Go back\n";
            int userChoice{0};
            std::cin >> userChoice;
            
            switch (userChoice){
                case 1:
                    std::cout << "How much would you like to deposit?\n";
                    float depositAmount;
                    std::cin >> depositAmount;
                    account.deposit(depositAmount);
                    break;
                case 2:
                    std::cout << "How much would you like to withdraw?\n";
                    float withdrawAmount;
                    std::cin >> withdrawAmount;
                    account.withdraw(withdrawAmount);
                    break;
                case 3:
                    account.display();
                    break;
                case 4:
                    return;
                default:
                    std::cout << "Invalid choice.\n";
                    break;
            }
            return;
        }
    }
    std::cout << "Account not found.\n";
}

void Bank::displayAccounts(){
    std::cout << "Accounts in the bank:\n";
    for (auto &account : accounts){
        account.display();
        std::cout << "------------------------\n";
    }
}

void Bank::exitProgram(){
    std::cout << "Exiting the program\n";
    exit(0);
}
