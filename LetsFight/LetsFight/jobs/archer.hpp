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
    void attackOne(Fighter* userAttacking, Fighter* userDefending);
    void attackTwo(Fighter* userAttacking, Fighter* userDefending);
    void utilityOne(Fighter* userAttacking);
    void utilityTwo(Fighter* userAttacking);
private:
    std::string movePrompt {"Make a move!\n1. Jab 1\n2. Shoot 2\n3. Load 1\n4. Heavyshot 2"}, username {""};
};

#endif /* archer_hpp */
