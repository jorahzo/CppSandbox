//
//  mage.hpp
//  LetsFight
//
//  Created by George Peshkov on 8/6/23.
//

#ifndef mage_hpp
#define mage_hpp

#include <stdio.h>
#include "fighter.hpp"

// Defining Mage child class from Fighter
class Mage : public Fighter{
public:
    using Fighter::Fighter;
    void poke(Fighter *fightername);
    void spellshock(Fighter *fightername);
    void heal();
private:
};

#endif /* mage_hpp */
