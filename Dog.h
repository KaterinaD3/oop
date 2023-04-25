//
// Created by Katerina Dimitrova on 25.04.23.
//

#ifndef VIRTUAL_DOG_H
#define VIRTUAL_DOG_H


#include "Animal.h"


class Dog : public Animal{
public:

    Dog ( const char* name, const char* species) : Animal ( name, species){};
    virtual void talk();

};
#endif //VIRTUAL_DOG_H
