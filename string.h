//
// Created by Katerina Dimitrova on 28.03.23.
//

#ifndef OOP_STRING_H
#define OOP_STRING_H

#endif //OOP_STRING_H



class String {
    char* string;


public:

    int getLength ();
    bool empty ();
    const char* c_str ();

    String();
    String(const char* other);
    String( String const& other);
    String& operator= (String const& other);
    String& operator= (const char* other);

    ~String();
    String(String&& source);
    String& operator=(String&& other);
    char operator[](int index);
    String  operator+ (String& other);


};