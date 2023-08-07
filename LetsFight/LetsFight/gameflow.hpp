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
    void characterInit();
    bool gameOverCheck();
    void moveSelect(Fighter* thisFighter, Fighter* enemyFighter);
private:
    bool gameOver;
};

#endif /* gameflow_hpp */
