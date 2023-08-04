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
void Fighter::printUserStatus(){
    std::cout << "Username is " << username << "\n";
    std::cout << "Health is " << health << "\n";
    std::cout << "Mana is " << mana << "\n";
    std::cout << "Energy is " << energy << "\n";
}
