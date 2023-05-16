//
// Created by Katerina Dimitrova on 16.05.23.
//

#ifndef OOP2_USER_H
#define OOP2_USER_H
class User{

private:

static int idGenerator;
int id;
char* name;
char* password;

public:
User(int id, char const* name, char * password);
~User();
User(User const& other);
User& operator= (User const& other);

User(User && other);
User& operator= (User && other);

void hesh (char * arr);

static bool compare (User obj, char* password);
};

int User :: idGenerator  = 0;
#endif //OOP2_USER_H
