//
// Created by Katerina Dimitrova on 2.05.23.
//
#include "Employee.h"

Employee ::Employee() {
    this->id = 0;
}

void Employee::  setId(int id){
    this->id = id;
}
int Employee :: getId(){
    return this->id;
}