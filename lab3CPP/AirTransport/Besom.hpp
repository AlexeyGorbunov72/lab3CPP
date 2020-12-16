//
//  Besom.hpp
//  lab3CPP
//
//  Created by Alexey on 16.12.2020.
//

#ifndef Besom_hpp
#define Besom_hpp

#include <stdio.h>
#include "AirTransport.hpp"
#include <string>
class Besom: public AirTransport{
    double distanceReducerFunction(double distance){
        int n = distance / 1000;
        return (distance - n * (n - 1) / 2) / distance;
    }
public:
    Besom(string name): AirTransport(20, name){}
};
#endif /* Besom_hpp */
