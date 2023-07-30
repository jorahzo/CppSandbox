//
//  CD.hpp
//  cdplayer
//
//  Created by George Peshkov on 7/27/23.
//

#ifndef CD_hpp
#define CD_hpp

#include <stdio.h>
#include <string>
#include <vector>

//
class CD{
public:
    CD(std::string mixtapeNameIn, std::vector<std::string> tracksIn, int runtimeIn) : mixtapeName(mixtapeNameIn), tracks(tracksIn), runtime(runtimeIn) {};
private:
    std::string mixtapeName;
    std::vector<std::string> tracks;
    int runtime;
};


#endif /* CD_hpp */
