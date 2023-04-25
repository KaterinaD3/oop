//
// Created by Katerina Dimitrova on 25.04.23.
//

#ifndef VIRTUAL_CAT_H
#define VIRTUAL_CAT_H
#include "Animal.h"


class Cat : public Animal{
public:

    Cat ( const char* name, const char* species) : Animal ( name, species){};
    virtual void talk();
    ~Cat();
};

#endif //VIRTUAL_CAT_H
