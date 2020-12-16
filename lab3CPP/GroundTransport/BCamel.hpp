//
//  BCamel.hpp
//  lab3CPP
//
//  Created by Alexey on 16.12.2020.
//

#ifndef BCamel_hpp
#define BCamel_hpp

#include <stdio.h>
#include "GroundTransport.hpp"
#include <string>
class BCamel: public GroundTransport{
public:
    BCamel(string name): GroundTransport(10, name, {5, 8}, 30){}
};
#endif /* BCamel_hpp */
