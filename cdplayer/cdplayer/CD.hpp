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

class CD{
public:
    CD(std::vector<std::string> tracksIn, int runtimeIn) : tracks(tracksIn), runtime(runtimeIn) {}
    // Setters + Getters
    void setTracks();
    std::vector<std::string> getTracks();
    void setRuntime();
    int getRuntime();
private:
    std::vector<std::string> tracks;
    int runtime;
    
};


#endif /* CD_hpp */
