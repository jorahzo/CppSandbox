//
//  main.cpp
//  LetsFight
//
//  Created by George Peshkov on 8/3/23.
//

#include <iostream>
#include "fighter.hpp"
#include "warrior.hpp"
#include "gameflow.hpp"

int main() {
    Gameflow ThisGame;
    // Code to initialize user. Consider console class to simplify.
    std::cout << "Hello, what is your username?\n";
    std::string playerUsername;
    std::cin >> playerUsername;
    std::unique_ptr<Fighter> userCharacter = ThisGame.characterInit(playerUsername);
    std::unique_ptr<Fighter> enemyCharacter = ThisGame.enemyInit();
    userCharacter->printUserStatus();
    enemyCharacter->printUserStatus();
    /*
    srand(time(NULL));
    int computerChoice = (1 + rand() % 1);
    switch(computerChoice){
        case 1:
            Warrior computer("Staniel Governhands", 100, 0, 100);
    }
     */

    
    return 0;
}

