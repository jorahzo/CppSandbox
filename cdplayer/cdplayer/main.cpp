//
//  main.cpp
//  cdplayer
//
//  Created by George Peshkov on 7/27/23.
//

#include <iostream>
#include <unistd.h>
#include <vector>

//Declarations
void wait(int waittime);
std::string bandnameGen();
int yearGen();

int main(){
    int waittime = 1000000;
    std::cout << "It's 1998, you wake up on Saturday morning to the sound of a passing train and liveliness of a baketball game.\n";
    wait(waittime);
    int userChoice {0};
    while(userChoice!=2){
        std::cout << "\nWhat do we do now?\n1. Go back to bed. \n2. Get up and brush teeth.\n3. Turn on the TV.\n4. Look out of the window.\n";
        std::cin >> userChoice;
        if (userChoice == 1){
            std::cout << "You sleep a little longer\n";
            wait(waittime);
        }
        else if (userChoice == 2){
            std::cout << "You start brushing your teeth to the thought of " << bandnameGen() << " new album\n Their long awaited return since the year " << yearGen() << "\n. You finish brushing your teeth and exit your house to head to the local music shop.\n";
            break;
        }
        else if (userChoice == 3){
            std::cout << "You turn on the TV and see a commercial for the latest SONY 1240 CD player. Featuring a battery life of 2 hours! Take your music on the go with this handy little thing.\n";
        }
        else if (userChoice == 4){
            std::cout << "You look out the window and take in the sight of a 10AM Brooklyn, New York. People of all different backgrounds are lined up at the bagel shop. Teens and even a few adults are balling on the court.\n";
        }
        else {
            std::cout << "Not a valid option\n";
        }
    }
return 0;
}

// Definitions
// This function produces three ".", giving a wait type feeling to the narrative.
void wait(int waittime){
    for(int i = 0; i < 3; i++){
        std::cout << ".";
        usleep(waittime);
    }
    std::cout << "\n";
}
// This function gives us a random band name by picking random elements between two arrays and combining them
std::string bandnameGen(){
    srand(time(0));
    std::string months[12] {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    std::string animals[12] {"Monkey", "Mouse", "Horse", "Elephant", "Bird", "Cat", "Dog", "Lizard", "Moose", "Turtle", "Fish", "Rhino"};
    int monthNum = 1 + (rand() % 12);
    int animalNum = 1 + (rand() % 12);
    std::string bandName = months[monthNum] + " " + animals[animalNum];
    return bandName;
}
//
int yearGen(){
    srand(time(0));
    int year = 1980 + (rand() % 20);
    return year;
}


    
