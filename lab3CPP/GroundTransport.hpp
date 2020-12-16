//
//  GroundTransport.hpp
//  lab3CPP
//
//  Created by Alexey on 16.12.2020.
//

#ifndef GroundTransport_hpp
#define GroundTransport_hpp

#include <stdio.h>
#include "Transport.hpp"
#include <vector>
using namespace std;
class GroundTransport: public Transport{
    int restIterationCounter = -1;
    double stamina;
    vector<double> restArray;
public:
    GroundTransport(double velocity,string name, vector<double> restArray, double stamina): Transport(velocity, name) {
        this->restArray = restArray;
        this->stamina = stamina;
    }
    void prepareToRace(){
        restIterationCounter = -1;
    }
    double rest(){
        restIterationCounter++;
        if(restIterationCounter >= restArray.size()){
            return *(restArray.end() - 1);
        }
        return restArray[restIterationCounter];
    }
    double moveTo(double distance){
        double time = 0.0;
        double doneDistance = 0.0;
        while(doneDistance + getVelocity() * stamina < distance){
            doneDistance += stamina * getVelocity();
            time += rest();
            time += stamina;
        }
        time += (distance - doneDistance) / getVelocity();
        return time;
    }
};
#endif /* GroundTransport_hpp */

