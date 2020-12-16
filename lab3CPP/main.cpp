//
//  main.cpp
//  lab3CPP
//
//  Created by Alexey on 16.12.2020.
//

#include <iostream>
#include "fabric.hpp"
#include "Race.hpp"
#include "TypeOfRaces.cpp"
#include "TransportEnum.cpp"
#include "Camel.hpp"
int main(int argc, const char * argv[]) {
    Race race(Ground);
    Fabric fabric;
    race.addParticipant(fabric.getTransport(CENTAUR, "кентавр"));
    race.addParticipant(fabric.getTransport(CAMEL, "верблюд"));
    race.addParticipant(fabric.getTransport(SHOES, "ботинки"));
    
    auto result = race.startRace(10);
    cout << "winner name: " << result.second->getUIDAndName() << endl;
    cout << "winner time:" << result.first << endl;
    return 0;
}
