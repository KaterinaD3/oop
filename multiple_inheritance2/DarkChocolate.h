//
// Created by Katerina Dimitrova on 23.05.23.
//

#ifndef MULTIPLE_INHERITANCE_DARKCHOCOLATE_H
#define MULTIPLE_INHERITANCE_DARKCHOCOLATE_H



#include "Chocolate.h"
#include <string>
using namespace std;

class DarkChocolate : virtual Chocolate<string>{

    int percentageCoco;

public:
    DarkChocolate(int percentageCoco, string id);
    bool validId( string id);
};
#endif //MULTIPLE_INHERITANCE_DARKCHOCOLATE_H
