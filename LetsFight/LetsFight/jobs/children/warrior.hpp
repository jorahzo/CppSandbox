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
    void attackOne(Fighter* fightername);
private:

};

#endif /* warrior_hpp */

