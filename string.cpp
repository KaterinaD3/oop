//
// Created by Katerina Dimitrova on 28.03.23.
//
#include "string.h"
#include <iostream>
using namespace std;


String ::String (){
    this->string = nullptr;
}


String::String(const char* other){
    this->string = new char [strlen(other)];
    strcpy(this->string, other );
}

String :: String( String const& other){
    strcpy(this->string, other.string);

}
String :: String(String&& source){
    strcpy(this->string, source.string);
    source.string = nullptr;
}

String :: ~String (){
    delete[] this->string;
}


String& String ::  operator= (String const& other){
    if ( this != &other){
        strcpy(this->string, other.string);
    }
return *this;
}

String& String ::  operator= (const char* other){
    if ( this->string != other){
        strcpy(this->string, other);
    }
    return *this;
}

String& String ::operator=(String&& other){
    strcpy(this->string, other.string);
    other.string = nullptr;
    return *this;
}

 int String ::getLength() {

     return strlen(this->string);
}


bool String ::empty() {

    if (this->string == nullptr){
        return true;
    }
    return false;
}


const char* String :: c_str (){
    char* arr  = new char[this->getLength()];

    for ( int i =  0; i <this->getLength(); i++ ){
        arr[i] = this-> string[i];
    }

    return arr;
}
char String :: operator[](int index) {
    if (index >= this->getLength() && index < 0) {
        cout << "It is bigger than the length of the string." << endl;
        return '0';
    } else {
        return this->string[index];
    }

}

String String :: operator+ (String& other){


    char* arr  = new char[this->getLength() + other.getLength()];


    for ( int i = 0; i < this->getLength(); i++){
        arr[i] = this->string[i];
    }

    for ( int i = 0; i < other.getLength(); i++){
        arr[i+this->getLength()] = other[i];
    }


    String obj ;
    obj.string = arr;

    return obj;

}


