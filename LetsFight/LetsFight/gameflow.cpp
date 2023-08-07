//
//  gameflow.cpp
//  LetsFight
//
//  Created by George Peshkov on 8/6/23.
//
#include <iostream>
#include "gameflow.hpp"

// thisFighter refers to the user making the input, enemyFighter is who will be affected by said input
void Gameflow::moveSelect(Fighter* thisFighter, Fighter* enemyFighter){
    if (thisFighter->npcCheck() == false){
        std::cout << "Make a move\n\n";
    }
}

