/* main.cpp
 Problem: Create a simple banking application that simulates a bank account. The account should have a balance and allow deposits and withdrawals. Also, implement a feature to display the account balance.
 */
#include <iostream>
#include "Bank.hpp"
#include "BankAccount.hpp"


int main() {
    Bank bank;
    int choice;
    
    do{
        std::cout << "Bank account management system\n1. Add account\n2. Access existing account\n3. Display details of all accounts\n4. Exit.";
        std::cin >> choice;
        switch (choice){
            case 1:
                bank.addAccount();
                break;
            case 2:
                bank.accessAccount();
                break;
            case 3:
                bank.displayAccounts();
                break;
            case 4:
                bank.displayAccounts();
                break;
            default:
                std::cout << "Invalid option.\n";
                break;
        }
    } while (true);
    return 0;
}
