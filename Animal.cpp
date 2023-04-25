//
// Created by Katerina Dimitrova on 25.04.23.
//
#include "Animal.h"
#include <cstring>
#include <iostream>

Animal :: Animal(){
    this->name = nullptr;
    this->species = nullptr;
}
Animal::Animal(char const * name, char const * species){
    this->name = new char[strlen(name)+1];
    strcpy(this->name, name);

    this->species = new char[strlen(species)+1];
    strcpy(this->species, species);
}
Animal::Animal( Animal const& other){
    this->name = new char[strlen(other.name)+1];
    strcpy(this->name, other.name);

    this->species = new char[strlen(other.species)+1];
    strcpy(this->species, other.species);

}
Animal :: ~Animal(){
    delete[] name;
    delete[] species;
}
Animal& Animal::operator= (Animal const& other){
    if(this != &other){
        delete [] this->name;
        delete[] this->species;


        this->name = new char[strlen(name)+1];
        strcpy(this->name, name);

        this->species = new char[strlen(other.species)+1];
        strcpy(this->species, other.species);

    }
}


char* Animal :: getName(){
    return this->name;
}

char* Animal ::getSpecies(){
    return this->species;
}