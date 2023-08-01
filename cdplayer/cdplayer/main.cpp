//
//  main.cpp
//  cdplayer
//
//  Created by George Peshkov on 7/27/23.
//

#include <iostream>
#include <vector>
#include <unistd.h>

#include "Narration.hpp"


//Declarations
void wait(int waittime);
std::string bandnameGen();
int yearGen();

int main(){
    int waittime = 1000000;
    // Start of plot
    std::cout << "It's 1998, you wake up on Saturday morning to the sound of a passing train and liveliness of a baketball game.\n";
    // Begin implementation using classes below.
    Narration Story;
    Story.loopNarration(Story.intro(10000, Story.yearGen(), Story.bandnameGen()), 3);
}

    
