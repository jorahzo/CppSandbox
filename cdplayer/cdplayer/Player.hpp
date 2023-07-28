//
//  Player.hpp
//  cdplayer
//
//  Created by George Peshkov on 7/27/23.
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>
#include <string>

class Player{
public:
    Player(std::string brandInit, std::string modelInit) : brand(brandInit), model(modelInit) {};
private:
    std::string brand;
    std::string model;
};

#endif /* Player_hpp */
