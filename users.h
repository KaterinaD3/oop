//
// Created by Katerina Dimitrova on 4.04.23.
//

#ifndef OOP_USERS_H
#define OOP_USERS_H

#endif //OOP_USERS_H



class Users{

    char* name;
    char* password;
public:
    void setName(char *name);
    char *getName();
    char *getPassword() ;
    void setPassword(char *password);



    Users();
    Users( char* name,  char* password);


    Users(const char* other);
    Users( Users const& other);


    ~Users();




    //  bool isUser ();

    void createUser ();

};