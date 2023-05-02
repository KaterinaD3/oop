//
// Created by Katerina Dimitrova on 2.05.23.
//
#include "User.h"
#include <cstring>

User :: User(){
    this->name = nullptr;

}
User :: User( const char* name){

    this->name = new char [strlen(name+1)];
    strcpy(this->name, name);

}
User :: User( User const& other){

    if (this != &other) {
        this->name = new char[strlen(other.name + 1)];
        strcpy(this->name, other.name);
    }

}


 User& User ::operator= (const User& other){

     if (this != &other) {

         delete[] this->name;
         this->name = new char[strlen(other.name + 1)];
         strcpy(this->name, other.name);

     }

     return *this;
}

User :: ~User(){
    delete[] name;
}

User ::User(User &&other) {

    if ( this != &other){
        delete[] this->name;
        this->name = new char[strlen(other.name + 1)];
        strcpy(this->name, other.name);
        other.name = nullptr;

    }
}

User& User :: operator= (User&& other){
    if (this != &other){
        delete[] this->name;
        this->name = new char[strlen(other.name + 1)];
        strcpy(this->name, other.name);
        other.name = nullptr;

    }
    return *this;
}


void User :: setName( const char* name){
    this->name = new char [strlen(name+1)];
    strcpy(this->name, name);
}
char* User :: getName(){
    return this->name;
}