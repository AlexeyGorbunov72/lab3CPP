//
//  Centaur.hpp
//  lab3CPP
//
//  Created by Alexey on 16.12.2020.
//

#ifndef Centaur_hpp
#define Centaur_hpp

#include <stdio.h>
#include "GroundTransport.hpp"
#include <string>
class Centaur: public GroundTransport{
public:
    Centaur(string name): GroundTransport(15, name, {2}, 8){}
};
#endif /* Centaur_hpp */
