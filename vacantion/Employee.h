//
// Created by Katerina Dimitrova on 2.05.23.
//

#ifndef OOP2_EMPLOYEE_H
#define OOP2_EMPLOYEE_H
#include "User.h"

class Employee : public User{
private:
    int id;

public:
    Employee();
    Employee (int id, const char* name): User(name){
        this->id = id;
    };



    void setId(int id);
    int getId();
};

#endif //OOP2_EMPLOYEE_H
