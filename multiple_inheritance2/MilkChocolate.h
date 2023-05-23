//
// Created by Katerina Dimitrova on 23.05.23.
//

#ifndef MULTIPLE_INHERITANCE_MILKCHOCOLATE_H
#define MULTIPLE_INHERITANCE_MILKCHOCOLATE_H

#include "Chocolate.h"
class MilkChocolate : virtual Chocolate<int>{

    int percentageMilk;

public:
    MilkChocolate(int percentageMilk, int id);
   // bool validId(int id);

};

#endif //MULTIPLE_INHERITANCE_MILKCHOCOLATE_H
