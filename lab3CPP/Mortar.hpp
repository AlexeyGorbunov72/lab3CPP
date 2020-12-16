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
public:
    double distanceReducerFunction(double distance) override{
        return 1 - 0.06;
    }
    Mortar(string name): AirTransport(8, name){}
};
#endif /* Mortar_hpp */
