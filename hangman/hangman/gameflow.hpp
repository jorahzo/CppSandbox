//
//  gameflow.hpp
//  hangman
//
//  Created by George Peshkov on 8/10/23.
//

#ifndef gameflow_hpp
#define gameflow_hpp

#include <stdio.h>
#include <iostream>
#include <string>

class GameFlow{
public:
    GameFlow(){
        std::cout << "Hello! What is your username?\n";
        std::cin >> username;
    }
    void printRules();
    std::string returnUsername();
private:
    std::string username{""};
};

#endif /* gameflow_hpp */
