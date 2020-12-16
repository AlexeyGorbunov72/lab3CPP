//
//  Transport.hpp
//  lab3CPP
//
//  Created by Alexey on 16.12.2020.
//

#ifndef Transport_hpp
#define Transport_hpp
#include <string>
#include <stdio.h>
using namespace std;
class Transport{
    double velocity;
    int selfUID;
    string name;
    int generateUID(){
        static int staticUID = 0;
        staticUID++;
        return staticUID;
    }
public:
    Transport(double velocity, string name){
        this->name = name;
        this->velocity = velocity;
        this->selfUID = generateUID();
    }
    double getVelocity(){
        return velocity;
    }
    virtual double moveTo(double distance) = 0;
    virtual void prepareToRace() = 0;
    string getUIDAndName(){
        return name;
    }
};
#endif /* Transport_hpp */
