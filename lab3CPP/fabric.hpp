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
            case Camel:
                return new Camel(name);
                break;
            case Besom:
                return new Besom(name);
                break;
            case BCamel:
                return new BCamel(name);
                break; 
            case Centaur:
                return new Centaur(name);
                break;
            case Shoes:
                return new Shoes(name);
                break;
            case Mortar:
                return new Mortar(name);
                break;
            case Capter:
                return new Capter(name);
                break;
        }
    }
};
#endif /* fabric_hpp */
