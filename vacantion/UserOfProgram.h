//
// Created by Katerina Dimitrova on 2.05.23.
//

#ifndef OOP2_USEROFPROGRAM_H
#define OOP2_USEROFPROGRAM_H



#include "User.h"

class UserOfProgram : public User{
private:
    int id;

public:
    UserOfProgram();
    UserOfProgram (int id, const char* name): User(name){
        this->id = id;
    };



    void setId(int id);
    int getId();
};
#endif //OOP2_USEROFPROGRAM_H
