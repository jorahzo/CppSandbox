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
    void addToHangman();
    std::string returnWord();
    std::string returnStyledWordBlank();
    std::string returnHangman();
    void guessChar();
    int getTries();
private:
    int tries{6};
    std::string hangmanAscii;
    std::string word;
    std::string wordBlank;
    std::vector<std::string> wordlist {"Cheese", "Horse", "Mushroom", "Lava", "Butterfly", "Laminate", "Virus", "Mississippi"};
};

#endif /* hangman_hpp */
