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
    std::cout << hangman.returnHangman();
    std::cout << hangman.returnStyledWordBlank();
    while(hangman.getTries() > 0 || hangman.wordGuessed() == false){
        hangman.guessChar();
        hangman.addToHangman();
        std::cout << hangman.returnHangman();
        std::cout << hangman.returnStyledWordBlank();
    }
}

// Code for tests
/* Cycles through ascii
 for(int i = 6; i >= 0 ; i--){
     hangman.addToHangman(i);
     std::cout<<hangman.printHangman()<<"\n";
 */
