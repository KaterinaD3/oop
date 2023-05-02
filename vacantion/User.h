//
// Created by Katerina Dimitrova on 2.05.23.
//

#ifndef OOP2_USER_H
#define OOP2_USER_H



class User{
private:
    char* name;

public:
    User();
    User(  const char* name);
    User( User const& other);
    User &operator= (const User& other);
    ~User();

    User (User&& other);
    User& operator= (User&& other);



    void setName( const char* name);
    char* getName();

};
#endif //OOP2_USER_H
