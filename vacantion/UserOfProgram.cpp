//
// Created by Katerina Dimitrova on 2.05.23.
//

#include "UserOfProgram.h"

UserOfProgram ::UserOfProgram() {
    this->id = 0;
}

void UserOfProgram::  setId(int id){
    this->id = id;
}
int UserOfProgram :: getId(){
    return this->id;
}