//
//  Capter.hpp
//  lab3CPP
//
//  Created by Alexey on 16.12.2020.
//

#ifndef Capter_hpp
#define Capter_hpp

#include <stdio.h>
#include "AirTransport.hpp"
#include <string>
class Capter: public AirTransport{
    double distanceReducerFunction(double distance){
        if(distance < 1000){
            return 1 - 0.0;
        } else if(distance < 5000){
            return 1 - 0.03;
        } else if(distance < 10000){
            return 1 - 0.1;
        }
        return 1 - 0.05;
    }
public:
    Capter(string name): AirTransport(10, name){}
};
#endif /* Capter_hpp */
