//
//  thief.hpp
//  LetsFight
//
//  Created by George Peshkov on 8/6/23.
//

#ifndef thief_hpp
#define thief_hpp

#include <stdio.h>
#include "fighter.hpp"

// Defining Thief child class from Fighter
class Thief : public Fighter{
public:
    using Fighter::Fighter;
    void stab(Fighter *fightername);
    void poison(Fighter *fightername);
    void dodge(Fighter *fightername);
    void kick(Fighter *fightername);
private:
    std::string movePrompt {"Make a move!\n1. Stab \n2. Poison \n3. Dodge \n4. Kick"}, username {""};
};

#endif /* thief_hpp */

