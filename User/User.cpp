//
// Created by Katerina Dimitrova on 16.05.23.
//
#include "User.h"
#include <cstring>

User :: User(int id, char const* name, char * password){
    idGenerator++;
    this-> id = idGenerator;

    this->name = new char[strlen(name)+1];
    strcpy(this->name, name);


    hesh(password);
    this->password = new char[strlen(password)+1];
    strcpy(this->password, password);

}
User :: ~User(){
    delete [] name;
    delete[] password;
}
User :: User(User const& other){
    id = other.id;

    this->name = new char[strlen(other.name)+1];
    strcpy(this->name, other.name);

    this->password = new char[strlen(other.password)+1];
    strcpy(this->password, other.password);

}
User& User :: operator= (User const& other){
    if (this != &other){
        id = other.id;

        delete[] name;
        this->name = new char[strlen(other.name)+1];
        strcpy(this->name, other.name);

        delete[] password;
        this->password = new char[strlen(other.password)+1];
        strcpy(this->password, other.password);
    }
    return  *this;
}

User :: User(User && other){
    id = other.id;
    name = other.name;
    password = other.password;

    other.name = nullptr;
    other.password = nullptr;
    other.id = 0;
}
User& User :: operator= (User && other){
    if (this != &other){
        id = other.id;

        delete[] name;
        name = other.name;

        delete[] password;
        password = other.password;

        other.id= 0;
        other.name = nullptr;
        other.password = nullptr;
    }

    return *this;
}

void User::hesh (char * arr){
    for (int i = 0; i < strlen(arr); i++){
        arr[i] = arr[i]+1;
    }
}

 bool User :: compare (User obj, char* password){
     for (int i = 0; i < strlen(password); i++){
         password[i] = password[i]+1;
     }

     if(strlen(obj.password) != strlen(password)){
         return false;
     }
     for ( int i = 0; i < strlen(password); i++){

         if ( obj.password[i] != password[i]){
             return false;
         }
     }
     return true;
}