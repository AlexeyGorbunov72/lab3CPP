//
//  Race.hpp
//  lab3CPP
//
//  Created by Alexey on 16.12.2020.
//

#ifndef Race_hpp
#define Race_hpp
#include "fabric.hpp"
#include <iostream>
#include "Transport.hpp"
#include <float.h>
#include "TypeOfRaces.cpp"
using namespace std;
class Race{
    vector<Transport*> participants;
    TypeOfRaces type;
    
    bool validate(Transport* participant){
        switch (type) {
            case Ground:
                if((AirTransport*)(participant)){
                    cout << "Participant access denied" << endl;
                    return false;
                }
                break;
            case Air:
                if((GroundTransport*)(participant)){
                    cout << "Participant access denied" << endl;
                    return false;
                }
                break;
            case Free:
                return true;
                break;
        }
        return true;
    }
public:
    Race(TypeOfRaces type) {
        this->type = type;
    }
    void addParticipant(Transport* participant){
        if(!validate(participant)){
            return;
        }
        participants.push_back(participant);
    }
    
    
    pair<double, Transport*> startRace(double distance){
        
        vector<pair<double, Transport*>> times;
        for(int i = 0; i < participants.size(); i++){
            times.push_back(make_pair(participants[i]->moveTo(distance), participants[i]));
        }
        double minTime = DBL_MAX;
        pair<double, Transport*> winner;
        for(int i = 0; i < times.size(); i++){
            if(times[i].first < minTime){
                minTime = times[i].first;
                winner = times[i];
            }
        }
        return  winner;
    }
    void totalRest(){
        for(int i = 0; i < participants.size(); i++){
            participants[i]->prepareToRace();
        }
    }
};

#endif /* Race_hpp */
