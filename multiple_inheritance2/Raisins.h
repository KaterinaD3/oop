//
// Created by Katerina Dimitrova on 23.05.23.
//

#ifndef MULTIPLE_INHERITANCE_RAISINS_H
#define MULTIPLE_INHERITANCE_RAISINS_H

#include "Chocolate.h"
#include <string>
using namespace std;

class Raisins : virtual Chocolate<string>{


    int percentageRaisins;

public:
    Raisins(int percentageRaisins, int id);
};

#endif //MULTIPLE_INHERITANCE_RAISINS_H
