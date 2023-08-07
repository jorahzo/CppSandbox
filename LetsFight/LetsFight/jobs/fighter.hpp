//
//  fighter.hpp
//  LetsFight
//
//  Created by George Peshkov on 8/3/23.
//

#ifndef fighter_hpp
#define fighter_hpp

#include <stdio.h>
#include <string>

class Fighter{
public:
    // Constructor
    Fighter(std::string usernameIn, int healthIn, int manaIn, int energyIn, bool npcIn=true) : username(usernameIn), health(healthIn), mana(manaIn), energy(energyIn), npc(npcIn){}
    // Setters
    void setHealth(int newHealth);
    void setMana(int newMana);
    void setEnergy(int newEnergy);
    // Getters
    std::string getUsername();
    int getHealth();
    int getMana();
    int getEnergy();
    bool npcCheck();
    void printUserStatus();
    // Move placeholders, these will be overriden on each child
    void attackOne();
    void attackTwo();
    void utilityOne();
    void utilityTwo();
private:
    std::string username;
    bool npc;
    int health, mana, energy;
};

#endif /* fighter_hpp */
