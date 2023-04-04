//
// Created by Katerina Dimitrova on 4.04.23.
//
#include "users.h"
#include <cstring>
#include <iostream>
#include <fstream>


const unsigned BUFF_SIZE = 1024;


void Users::setPassword(char *password) {
    for ( int i = 0; i < strlen(password); i++){
        this->password[i] = password[i];
    }
}

char *Users::getPassword()  {
    return password;
}

char *Users::getName()  {
    return name;
}

void Users::setName(char *name) {
    for ( int i = 0; i < strlen(name); i++){
        this->name[i] = name[i];
    }
}

Users::Users() {
  this->name = nullptr;
  this->password = nullptr;
}

Users :: Users( char* name,  char* password){
    setName(name);
    setPassword(password);
}



void Users ::createUser (){

    bool isUserName = true;
    bool isUserPassword = true;
    //std::ifstream file("myUsers.txt");
    std::fstream file("myUsers.txt");
    if (!file.is_open()){
        std::cout << "File can't be opened!" << std::endl;

    }else {

        char buff[BUFF_SIZE];
        while (!file.eof()) {
            file.getline(buff, BUFF_SIZE);
           for ( int i = 0; i < strlen(this->name); i++){
               isUserName = true;

               if ( this->name [i] != buff[i]){
                   isUserName = false;
                   break;
               }

           }

           for ( int i =strlen(this->name)+1; i < strlen(this->password); i++){
               isUserPassword = true;

               if ( this->password [i] != buff[i]){
                   isUserPassword = false;
                   break;
               }
           }

            //file.close();
            //std::ofstream file("myUsers.txt");
           if ( isUserPassword == false && isUserName == true){
               file << getName() << " "<< getPassword()<<std::endl;
           }else {
               std :: cout << "There is already such a profile!";
           }
        }
    }
    file.close();
}

Users::~Users() {
    delete[] this->name;
    delete[] this->password;
}
