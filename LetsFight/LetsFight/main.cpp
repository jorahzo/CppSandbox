//
//  main.cpp
//  LetsFight
//
//  Created by George Peshkov on 8/3/23.
//

#include <iostream>
#include "fighter.hpp"
#include "jobs.hpp"
#include "gameflow.hpp"

int main() {
    Gameflow ThisGame;
    // Code to initialize user. Consider console class to simplify.
    std::cout << "Hello, what is your username?\n";
    std::string playerUsername;
    std::cin >> playerUsername;
    // Here we are generating the user's class based on their selection of warrior, thief, mage, archer.
    bool flag = false;
    while (true) {
        std::cout << "Which class would you like to play?\n1. Warrior\n2. Thief\n3. Mage\n4. Archer\n";
        std::string userClass;
        std::cin >> userClass;
        switch (stoi(userClass)) {
            case 1: {
                Warrior User(playerUsername, 100, 0 , 100);
                flag = true;
                break;
            }
            default: {
                std::cout << "Invalid entry. Try again.\n";
                break;
            }
        }
        if(flag) break;
    }
    // This is where we generate the computer fighter
    srand(time(NULL));
    int computerChoice = (1 + rand() % 1);
    switch(computerChoice){
        case 1:
            Warrior computer("Staniel Governhands", 100, 0, 100);
    }

    
    
    return 0;
}

