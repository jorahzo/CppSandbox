//
//  hangman.cpp
//  hangman
//
//  Created by George Peshkov on 8/10/23.
//

#include "hangman.hpp"
#include <iostream>


// Method allows us to update ascii art
void Hangman::addToHangman(){
    switch(tries){
        case 5:
            hangmanAscii =
           "+---+\n"
           "|   |\n"
           "O   |\n"
           "    |\n"
           "    |\n"
           "    |\n"
         "=========\n";
            break;
        case 4:
            hangmanAscii =
           "+---+\n"
           "|   |\n"
           "O   |\n"
           "|   |\n"
           "    |\n"
           "    |\n"
         "=========\n";
            break;
        case 3:
            hangmanAscii =
           "+---+\n"
           " |  |\n"
           " O  |\n"
           "/|  |\n"
           "    |\n"
           "    |\n"
         "=========\n";
            break;
        case 2:
            hangmanAscii =
           "+---+\n"
           " |  |\n"
           " O  |\n"
           "/|\\ |\n"
           "    |\n"
           "    |\n"
         "=========\n";
            break;
        case 1:
            hangmanAscii =
           "+---+\n"
          " |   |\n"
          " O   |\n"
          "/|\\  |\n"
          "/    |\n"
          "     |\n"
         "=========\n";
            break;
        case 0:
            hangmanAscii =
           "+---+\n"
          " |   |\n"
          " O   |\n"
          "/|\\  |\n"
          "/ \\  |\n"
          "     |\n"
         "=========\n"
         "GAME OVER!\n";
            break;
    }
}

// Returns
std::string Hangman::returnHangman(){
    return hangmanAscii;
}

std::string Hangman::returnWord(){
    return word;
}
// Method returns a spaced out version of wordBlank, easier for user to see in console.
std::string Hangman::returnStyledWordBlank(){
    std::string newWordBlank = "";
    for (int i = 0; i < wordBlank.size(); i++){
        newWordBlank += wordBlank[i];
        newWordBlank += " ";
    }
    return newWordBlank;
}
// Method to check the user's guess
void Hangman::guessChar(char userGuess){
    bool found = false;
    for (int i = 0; i < word.length(); i++){
        if (word[i] == userGuess){
            wordBlank[i] = userGuess;
            found = true;
        }
    }
    if (found == false){
        tries -= 1;
    }
}

int Hangman::getTries(){
    return tries;
}
// Check if word is guessed
bool Hangman::wordGuessed(){
    if (wordBlank == word){
        return true;
    }
    else {
        return false;
    }
}

bool Hangman::letterGuessed(char userGuess){
    for (int i = 0; i < guessedLetters.size(); i++){
        if (guessedLetters[i] == userGuess){
            return true;
        }
    }
    guessedLetters += userGuess;
    return false;
}
