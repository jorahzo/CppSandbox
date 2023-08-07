//
//  warrior.cpp
//  LetsFight
//
//  Created by George Peshkov on 8/6/23.
//

#include <iostream>
#include "warrior.hpp"

void Warrior::attackOne(Fighter *fightername){
    std::cout << fightername->getUsername() << " takes " << fightername->getHealth() - 10 << "damage\n";
    fightername->setHealth(fightername->getHealth() - 10);
}
