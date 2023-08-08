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
    void setHealth(int newHealth), setMana(int newMana), setEnergy(int newEnergy);
    
    // Getters
    std::string getUsername(), getMovePrompt();
    int getHealth(), getMana(), getEnergy();
    bool getNPC();
    void printUserStatus();
    
    // Select move
    void moveSelect(Fighter* userAttacking, Fighter* userDefending);
    
    // Move placeholders, these will be overriden on each child
    void attackOne(Fighter* userAttacking, Fighter* userDefending), attackTwo(Fighter* userAttacking, Fighter* userDefending), utilityOne(Fighter* userAttacking), utilityTwo(Fighter* userAttacking);

private:
    // To be changed on a per child basis
    std::string movePrompt {"Make a move!\n1. Attack 1\n2. Attack 2\n3. Utility 1\n4. Utility 2"}, username {""};
    bool npc;
    int health, mana, energy;
};

#endif /* fighter_hpp */
