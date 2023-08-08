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
    std::string movePrompt {"Make a move!\n1. Jab 1\n2. Shoot 2\n3. Load 1\n4. Heavyshot 2"}, username {""};
};

#endif /* archer_hpp */
