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
                return new class Camel(name);
                break;
            case Besom:
                return new class Besom(name);
                break;
            case BCamel:
                return new class BCamel(name);
                break; 
            case Centaur:
                return new class Centaur(name);
                break;
            case Shoes:
                return new class Shoes(name);
                break;
            case Mortar:
                return new class Mortar(name);
                break;
            case Capter:
                return new class Capter(name);
                break;
        }
    }
};
#endif /* fabric_hpp */
