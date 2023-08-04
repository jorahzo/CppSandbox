//
//  main.cpp
//  LetsFight
//
//  Created by George Peshkov on 8/3/23.
//

#include <iostream>
#include "fighter.hpp"
#include "jobs.hpp"

int main() {
    Archer John("Johnnyboi", 0, 0, 0);
    John.printUserStatus();
    Warrior Jimmy("Jimmyboi", 100, 1000, 10000);
    Jimmy.printUserStatus();
    return 0;
}

