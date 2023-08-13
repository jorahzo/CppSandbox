//
//  warrior.cpp
//  LetsFight
//
//  Created by George Peshkov on 8/6/23.
//

#include <iostream>
#include "warrior.hpp"

// attackOne = slash
void Warrior::attackOne(Fighter* userAttacking, Fighter* userDefending){
    std::cout << userAttacking->getUsername() << " slashes " << userDefending->getUsername() << "\n";
}
// attackTwo = stab
void Warrior::attackTwo(Fighter* userAttacking, Fighter* userDefending){
    std::cout << userAttacking->getUsername() << " stabs " << userDefending->getUsername() << "\n";
}
// utilityOne = defend
void Warrior::utilityOne(Fighter* userAttacking){
    std::cout << userAttacking->getUsername() << " uses Defend\n";
}
// utilityTwo = WIP
void Warrior::utilityTwo(Fighter* userAttacking){
    std::cout << userAttacking->getUsername()  << "uses Utility 2\n";
}
