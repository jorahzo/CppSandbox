//
//  hangman.hpp
//  hangman
//
//  Created by George Peshkov on 8/10/23.
//

#ifndef hangman_hpp
#define hangman_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <random>

class Hangman{
public:
    Hangman(std::string initAscii =
           "+---+\n"
           "|   |\n"
           "    |\n"
           "    |\n"
           "    |\n"
           "    |\n"
         "=========\n") : hangmanAscii(initAscii){
        srand(time(NULL));
        int randomWordIndex = rand() % wordlist.size();
        word = wordlist[randomWordIndex];
        for (int i = 0; i < word.length(); i++){
            wordBlank += "_";
        }
    }
    void addToHangman(), guessChar(char userGuess);
    std::string returnWord(), returnStyledWordBlank(), returnHangman();
    bool wordGuessed(), letterGuessed(char userGuess);
    int getTries();
private:
    int tries{6};
    std::string hangmanAscii, word, wordBlank;
    std::vector<std::string> wordlist {"cheese", "horse", "mushroom", "lava", "butterfly", "laminate", "virus", "mississippi"};
    std::string guessedLetters {""};
};

#endif /* hangman_hpp */
