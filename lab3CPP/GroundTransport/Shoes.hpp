//
//  Shoes.hpp
//  lab3CPP
//
//  Created by Alexey on 16.12.2020.
//

#ifndef Shoes_hpp
#define Shoes_hpp

#include <stdio.h>
#include "GroundTransport.hpp"
#include <string>
class Shoes: public GroundTransport{
public:
    Shoes(string name): GroundTransport(6, name, {10, 5}, 60){}
};
#endif /* Shoes_hpp */
