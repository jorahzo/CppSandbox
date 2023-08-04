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
    Fighter(std::string usernameIn, int healthIn, int manaIn, int energyIn) : username(usernameIn), health(healthIn), mana(manaIn), energy(energyIn) {}
    // Setters
    void setHealth(int newHealth);
    void setMana(int newMana);
    void setEnergy(int newEnergy);
    // Getters
    std::string getUsername();
    int getHealth();
    int getMana();
    int getEnergy();
    void printUserStatus();
private:
    int health;
    int mana;
    int energy;
    std::string username;
};

#endif /* fighter_hpp */
