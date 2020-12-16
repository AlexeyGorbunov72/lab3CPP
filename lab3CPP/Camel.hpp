//
//  Camel.hpp
//  lab3CPP
//
//  Created by Alexey on 16.12.2020.
//

#ifndef Camel_hpp
#define Camel_hpp

#include <stdio.h>
#include "GroundTransport.hpp"
#include <string>
class Camel: public GroundTransport{
public:
    Camel(string name): GroundTransport(40, name, {5.0, 6.5, 8.0}, 10){}
};
#endif /* Camel_hpp */
