//
//  AirTransport.hpp
//  lab3CPP
//
//  Created by Alexey on 16.12.2020.
//

#ifndef AirTransport_hpp
#define AirTransport_hpp

#include <stdio.h>
#include "Transport.hpp"
#include <string>
class AirTransport: public Transport{
public:
    double doneDistance = -1.0;
    virtual double distanceReducerFunction(double distance);
    AirTransport(double velocity, string name): Transport(velocity, name) {}
    void prepareToRace() {
        doneDistance = -1.0;
    }
   double moveTo(double distance){
        if(doneDistance < 0){
            doneDistance += distance;
            return (distance * distanceReducerFunction(distance)) / getVelocity();
        }
       doneDistance += distance;
       return (distance * distanceReducerFunction(doneDistance)) / getVelocity();
    }
};
#endif /* AirTransport_hpp */
