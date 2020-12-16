//
//  Mortar.hpp
//  lab3CPP
//
//  Created by Alexey on 16.12.2020.
//

#ifndef Mortar_hpp
#define Mortar_hpp

#include <stdio.h>
#include "AirTransport.hpp"
#include <string>
class Mortar: public AirTransport{
    double distanceReducerFunction(double distance){
        return 1 - 0.06;
    }
public:
    Mortar(string name): AirTransport(8, name){}
    
};
#endif /* Mortar_hpp */
