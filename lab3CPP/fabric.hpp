//
//  fabric.hpp
//  lab3CPP
//
//  Created by Alexey on 16.12.2020.
//

#ifndef fabric_hpp
#define fabric_hpp

#include <stdio.h>
#include "TransportEnum.cpp"
#include "Transport.hpp"
#include "Camel.hpp"
#include "BCamel.hpp"
#include "Besom.hpp"
#include "Capter.hpp"
#include "Shoes.hpp"
#include "Mortar.hpp"
#include "Centaur.hpp"
#include <string>
class Fabric{
public:
    Transport* getTransport(Transports transport, string name = "unnamed"){
        switch (transport){
            case CAMEL:
                return new Camel(name);
                break;
            case BESOM:
                return new Besom(name);
                break;
            case BCAMEL:
                return new BCamel(name);
                break; 
            case CENTAUR:
                return new Centaur(name);
                break;
            case SHOES:
                return new Shoes(name);
                break;
            case MORTAR:
                return new Mortar(name);
                break;
            case CAPTER:
                return new Capter(name);
                break;
        }
    }
};
#endif /* fabric_hpp */
