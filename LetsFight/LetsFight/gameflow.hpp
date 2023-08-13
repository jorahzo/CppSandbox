//
//  gameflow.hpp
//  LetsFight
//
//  Created by George Peshkov on 8/6/23.
//

#ifndef gameflow_hpp
#define gameflow_hpp

#include <stdio.h>
#include "fighter.hpp"

class Gameflow{
public:
    // Class object initializations for user character and enemy character
    std::unique_ptr<Fighter> characterInit(std::string playerUsername);
    std::unique_ptr<Fighter> enemyInit();
private:
    bool gameOver;
};

#endif /* gameflow_hpp */
