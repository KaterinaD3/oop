//
// Created by Katerina Dimitrova on 23.05.23.
//

#ifndef MULTIPLE_INHERITANCE_MILKCHOCOWITHRAISINS_H
#define MULTIPLE_INHERITANCE_MILKCHOCOWITHRAISINS_H

#include "MilkChocolate.h"
#include "Raisins.h"
class MilkChocoWithRaisins : virtual MilkChocolate, Raisins {

public:

    MilkChocoWithRaisins(int id, int percentageMilk, int percentageRaisins);
    bool validId(int id);
};
#endif //MULTIPLE_INHERITANCE_MILKCHOCOWITHRAISINS_H
