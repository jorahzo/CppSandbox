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
bool Fighter::npcCheck(){
    return npc;
}
void Fighter::printUserStatus(){
    std::cout << "Username is " << username << "\n";
    std::cout << "Health is " << health << "\n";
    std::cout << "Mana is " << mana << "\n";
    std::cout << "Energy is " << energy << "\n";
}

// Attacks
void Fighter::attackOne(){};
void Fighter::attackTwo(){};
void Fighter::utilityOne(){};
void Fighter::utilityTwo(){};

