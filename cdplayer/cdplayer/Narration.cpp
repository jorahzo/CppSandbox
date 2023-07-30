//
//  Narration.cpp
//  cdplayer
//
//  Created by George Peshkov on 7/30/23.
//

#include "Narration.hpp"
#include <iostream>
#include <string>

// This function gives us the ability to loop through narration options should we desire. Input the narration dialog as storyPart(), then provide the input the user must make to close.
void Narration::loopNarration(void(*storyPart()) ,int closeNum){
    while(userChoice != closeNum){
        storyPart();
    }
}


// This is the first narration choice the user must make. We pass the waittime function, yeargen function, as well as the bandnameGen function. These are members of the Narration class.
void Narration::intro(void(*wait(int waitTime)), int(*yearGen()), std::string(*bandnameGen())){
    std::cout << "\nWhat do we do?\n1. Go back to bed. \n2. Get up and brush teeth.\n3. Turn on the TV.\n4. Look out of the window.\n";
    std::cin >> userChoice;
    switch(userChoice) {
        case 1:
            std::cout << "You sleep a little longer\n";
            wait(waitTime);
            break;
        case 2:
            std::cout << "You start brushing your teeth to the thought of " << bandnameGen() << " new album\n Their long awaited return since the year " << yearGen() << "\n. You finish brushing your teeth and exit your house to head to the local music shop.\n";
            break;
        case 3:
            std::cout << "You turn on the TV and see a commercial for the latest SONY 1240 CD player. Featuring a battery life of 2 hours! Take your music on the go with this handy little thing.\n";
            break;
        case 4:
            std::cout << "You look out the window and take in the sight of a 10AM Brooklyn, New York. People of all different backgrounds are lined up at the bagel shop. Teens and even a few adults are balling on the court.\n";
            break;
        default:
            std::cout << "Not a valid option\n";
            break;
    }
}

//  This member function returns a random year between 1980 - 2000.
int Narration::yearGen(){
    srand(time(0));
    int year = 1980 + (rand() % 20);
    return year;
}

// This member function returns a randomly generated band name. 
std::string Narration::bandnameGen(){
    srand(time(0));
    std::string months[12] {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    std::string animals[12] {"Monkey", "Mouse", "Horse", "Elephant", "Bird", "Cat", "Dog", "Lizard", "Moose", "Turtle", "Fish", "Rhino"};
    int monthNum = 1 + (rand() % 12);
    int animalNum = 1 + (rand() % 12);
    std::string bandName = months[monthNum] + " " + animals[animalNum];
    return bandName;
}
