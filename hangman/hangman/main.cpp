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
// Initializing Game
    GameFlow gameflow;
    gameflow.printRules();
    Hangman hangman;
    // Initial print of hangman and chars to be guessed
    std::cout << hangman.returnHangman();
    std::cout << hangman.returnStyledWordBlank();
    // This while loop will continuously loop until we either run out of "tries" or the word is guessed.
    while(hangman.getTries() > 0 && hangman.wordGuessed() == false){
        char charGuess = ' ';
        std::cout << "\nGuess a character:\n";
        std::cin >> charGuess;
        if (hangman.letterGuessed(charGuess) == false){
            hangman.guessChar(charGuess);
            hangman.addToHangman();
            std::cout << hangman.returnHangman();
            if(hangman.getTries() > 0 && hangman.wordGuessed() == false){
                std::cout << hangman.returnStyledWordBlank();
            }
            else if (hangman.wordGuessed() == true){
                std::cout << "You win!\nThe word was: " << hangman.returnWord() << "\n";
            }
        }
        else{
            std::cout << "You already guessed " << charGuess << "\nTry a different character!";
        }
    }
}
