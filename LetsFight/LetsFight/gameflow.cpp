//
//  gameflow.cpp
//  LetsFight
//
//  Created by George Peshkov on 8/6/23.
//
#include <iostream>
#include <memory>
#include "gameflow.hpp"

// Including each class file individually, wonder if there's a way to consolidate?
#include "fighter.hpp"
#include "archer.hpp"
#include "warrior.hpp"
#include "mage.hpp"
#include "thief.hpp"

// This method is used to initialize a player's class object. They can pick between Warrior, Thief, Mage, or Archer. A return type of fighter (base class) is used so we can keep this object in the mainline.
std::unique_ptr<Fighter> Gameflow::characterInit(std::string playerUsername){
    // Here we are generating the user's class based on their selection of warrior, thief, mage, archer.
    std::unique_ptr<Fighter> userCharacter = nullptr;
    bool flag = false;
    while (true) {
        std::cout << "Which class would you like to play?\n1. Warrior\n2. Thief\n3. Mage\n4. Archer\n";
        std::string userClass;
        std::cin >> userClass;
        switch (stoi(userClass)) {
            case 1: {
                userCharacter = std::make_unique<Warrior>(playerUsername, 100, 0, 100);
                flag = true;
                break;
            }
            case 2: {
                userCharacter = std::make_unique<Thief>(playerUsername, 100, 0, 100);
                flag = true;
                break;
            }
            case 3: {
                userCharacter = std::make_unique<Mage>(playerUsername, 100, 0, 100);
                flag = true;
                break;
            }
            case 4: {
                userCharacter = std::make_unique<Archer>(playerUsername, 100, 0, 100);
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
    return userCharacter;
}

// Here we are generating the enemy character. We should be able to combine this with the player init above.
std::unique_ptr<Fighter> Gameflow::enemyInit(){
    srand(static_cast<unsigned int>(time(NULL)));
    int enemyChoice = 1+rand()%4;
    std::unique_ptr<Fighter> enemyCharacter = nullptr;
    switch (enemyChoice) {
        case 1:
            enemyCharacter = std::make_unique<Warrior>("Edwin Higginson", 100, 0, 100);
            break;
        case 2:
            enemyCharacter = std::make_unique<Thief>("Slick Slash", 100, 0, 100);
            break;
        case 3:
            enemyCharacter = std::make_unique<Mage>("Gandalf Maruizo", 50, 40, 0);
            break;
        case 4:
            enemyCharacter = std::make_unique<Archer>("Legalis", 76, 0, 100);
            break;
        default:
            break;
    }
    return enemyCharacter;
}

