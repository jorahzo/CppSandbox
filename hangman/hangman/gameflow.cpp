//
//  gameflow.cpp
//  hangman
//
//  Created by George Peshkov on 8/10/23.
//
#include <iostream>
#include "gameflow.hpp"

std::string GameFlow::returnUsername(){
    return username;
}

void GameFlow::printRules(){
    std::string userChoice = "";
    std::cout << "Welcome " << username << " to hangman!\nRules:\n1. You can only guess one character at a time. \n2. You have six lives, one will be lost per incorrect guess.\n\nAre you ready to begin?\n1. Yes 2. No\n";
    while (userChoice != "1" || userChoice != "yes"){
        std::cin >> userChoice;
        if (userChoice == "1" || userChoice == "yes"){
            break;
        }
        else if (userChoice == "2" || userChoice == "no"){
            std::cout << "Reopen this application when you're ready :)\n";
            exit(0);
        }
        std::cout << "Invalid option\n1. Yes 2. No\n";
    }
    
}
