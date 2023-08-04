//
//  jobs.hpp
//  LetsFight
//
//  Created by George Peshkov on 8/4/23.
//

#ifndef jobs_hpp
#define jobs_hpp

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

// Defining Mage child class from Fighter
class Mage : public Fighter{
public:
    using Fighter::Fighter;
    void poke(Fighter *fightername);
    void spellshock(Fighter *fightername);
    void heal();
private:
};

// Defining Thief child class from Fighter
class Thief : public Fighter{
public:
    using Fighter::Fighter;
    void stab(Fighter *fightername);
    void poison(Fighter *fightername);
    void dodge(Fighter *fightername);
    void kick(Fighter *fightername);
private:
};

// Defining Warrior child class from Fighters
class Warrior : public Fighter{
public:
    using Fighter::Fighter;
    void guard(Fighter *fightername);
    void slash(Fighter *fightername);
    void stab(Fighter *fightername);
    void shieldbash(Fighter *fightername);
private:
};

#endif /* jobs_hpp */
