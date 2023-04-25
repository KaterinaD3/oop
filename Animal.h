//
// Created by Katerina Dimitrova on 25.04.23.
//

#ifndef VIRTUAL_ANIMAL_H
#define VIRTUAL_ANIMAL_H




class Animal {


    char* name;
    char* species;

public:

    Animal();
    Animal(char const * name, char const * species);
    Animal( Animal const& other);
    ~Animal();
    Animal& operator= (Animal const& other);
    virtual void talk() = 0;
    char* getName();
    char* getSpecies();


};
#endif //VIRTUAL_ANIMAL_H
