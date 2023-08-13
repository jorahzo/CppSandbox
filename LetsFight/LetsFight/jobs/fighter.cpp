//
//  fighter.cpp
//  LetsFight
//
//  Created by George Peshkov on 8/3/23.
//

#include "fighter.hpp"
#include <iostream>



// Setters
void Fighter::setHealth(int newHealth){
    health = newHealth;
}
void Fighter::setMana(int newMana){
    mana = newMana;
}
void Fighter::setEnergy(int newEnergy){
    energy = newEnergy;
}
// Getters
std::string Fighter::getUsername(){
    return username;
}
int Fighter::getHealth(){
    return health;
}
int Fighter::getMana(){
    return mana;
}
int Fighter::getEnergy(){
    return energy;
}
bool Fighter::getNPC(){
    return npc;
}
void Fighter::printUserStatus(){
    std::cout << "Username is " << username << "\n";
    std::cout << "Health is " << health << "\n";
    std::cout << "Mana is " << mana << "\n";
    std::cout << "Energy is " << energy << "\n";
}

// Move Select
void Fighter::moveSelect(std::unique_ptr<Fighter>& userAttacking, std::unique_ptr<Fighter>& userDefending){
    int playerChoice;
    if (userAttacking->getNPC() == false){
        std::cout << movePrompt;
        std::cin >> playerChoice;
        playerChoice = static_cast<int>(playerChoice);
    }
    else {
        srand(static_cast<unsigned int>(time(NULL)));
        playerChoice = 1+random()%4;
    }
    switch (playerChoice){
        case 1:
            userAttacking->attackOne(userAttacking, userDefending);
            break;
        case 2:
            userAttacking->attackTwo(userAttacking, userDefending);
            break;
        case 3:
            userAttacking->utilityOne(userDefending);
            break;
        case 4:
            userAttacking->utilityTwo(userDefending);
            break;
    }
}

// Attacks, override in child classes
void Fighter::attackOne(std::unique_ptr<Fighter>& userAttacking,std::unique_ptr<Fighter>& userDefending){};
void Fighter::attackTwo(std::unique_ptr<Fighter>& userAttacking,std::unique_ptr<Fighter>& userDefending){};
void Fighter::utilityOne(std::unique_ptr<Fighter>& userAttacking){};
void Fighter::utilityTwo(std::unique_ptr<Fighter>& userAttacking){};

