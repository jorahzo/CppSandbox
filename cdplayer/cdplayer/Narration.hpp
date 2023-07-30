//
//  Narration.hpp
//  cdplayer
//
//  Created by George Peshkov on 7/30/23.
//

#ifndef Narration_hpp
#define Narration_hpp

#include <stdio.h>
#include <string>

class Narration{
public:
    void loopNarration(void(*function()) ,int closeNum);
    void intro(void(*wait(int waitTime)), int(*yearGen()), std::string(*bandnameGen()));
    std::string bandnameGen();
    int yearGen();
private:
    int userChoice;
    int waitTime;
};


#endif /* Narration_hpp */
