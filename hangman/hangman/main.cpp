//
//  main.cpp
//  hangman
//
//  Created by George Peshkov on 8/10/23.
//

#include <iostream>
#include "hangman.hpp"
#include "gameflow.hpp"

int main() {
    GameFlow gameflow;
    gameflow.printRules();
    Hangman hangman;
    std::cout << hangman.returnWord() << "\n";
    std::cout << hangman.returnStyledWordBlank() << "\n";
}

// Code for tests
/* Cycles through ascii
 for(int i = 6; i >= 0 ; i--){
     hangman.addToHangman(i);
     std::cout<<hangman.printHangman()<<"\n";
 */
