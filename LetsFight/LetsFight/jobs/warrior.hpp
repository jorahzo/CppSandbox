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
    void slash(Fighter* userDefending);
    void stab(Fighter* userDefending);
    void guard(Fighter* userAttacking);
    
private:
    std::string movePrompt {"Make a move!\n1. Attack 1\n2. Attack 2\n3. Utility 1\n4. Utility 2"}, username {""};

};

#endif /* warrior_hpp */

