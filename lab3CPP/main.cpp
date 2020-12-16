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
int main(int argc, const char * argv[]) {
    Race race(Free);
    Fabric fabric;
    race.addParticipant(fabric.getTransport(Centaur));
    return 0;
}
