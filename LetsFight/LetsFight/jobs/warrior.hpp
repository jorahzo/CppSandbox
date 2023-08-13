//
//  warrior.hpp
//  LetsFight
//
//  Created by George Peshkov on 8/6/23.
//

#ifndef warrior_hpp
#define warrior_hpp

#include <stdio.h>
#include "fighter.hpp"

// Defining Warrior child class from Fighters
class Warrior : public Fighter{
public:
    using Fighter::Fighter;
    void attackOne(Fighter* userAttacking, Fighter* userDefending);
    void attackTwo(Fighter* userAttacking, Fighter* userDefending);
    void utilityOne(Fighter* userAttacking);
    void utilityTwo(Fighter* userAttacking);
private:
    std::string movePrompt {"Make a move!\n1. Slash 1\n2. Stab 2\n3. Defend 1\n4. Utility 2"}, username {""};
};

#endif /* warrior_hpp */

