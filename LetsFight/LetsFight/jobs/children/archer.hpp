//
//  archer.hpp
//  LetsFight
//
//  Created by George Peshkov on 8/6/23.
//

#ifndef archer_hpp
#define archer_hpp

#include <stdio.h>
#include "fighter.hpp"

// Defining Archer child class from Fighter
class Archer : public Fighter{
public:
    using Fighter::Fighter;
    void jab(Fighter *fightername);
    void shoot(Fighter *fightername);
    void load(Fighter *fightername);
    void heavyshot(Fighter *fightername);
private:
};

#endif /* archer_hpp */
