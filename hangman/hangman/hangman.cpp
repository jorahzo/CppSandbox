//
//  hangman.cpp
//  hangman
//
//  Created by George Peshkov on 8/10/23.
//

#include "hangman.hpp"
#include <iostream>

void Hangman::addToHangman(int tries){
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
         "=========\n";
            break;
    }
}
std::string Hangman::returnHangman(){
    return hangmanAscii;
}

std::string Hangman::returnWord(){
    return word;
}

std::string Hangman::returnStyledWordBlank(){
    std::string newWordBlank = "";
    for (int i = 0; i < wordBlank.size(); i++){
        newWordBlank += wordBlank[i];
        newWordBlank += " ";
    }
    wordBlank = newWordBlank;
    return wordBlank;
}

