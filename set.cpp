//
// Created by Katerina Dimitrova on 7.03.23.
//
#include "set.h"
#include <cstring>
#include <iostream>



 Set :: Set (){
    capacity = 10;
    numElements = 0;
}

 Set :: Set (Set const& other ){
  this->copy(other.elements, other.numElements, other.capacity);
}

 Set& Set :: operator= (Set const& other){
    if ( this != & other){
        this ->copy(other.elements, other.numElements, other.capacity);
    }

     return  *this;
}


 Set :: ~Set () {
    delete [] this ->elements;
}
  void Set :: copy ( int const* elements, int numElements, int capacity){
    this -> numElements = numElements;
    this -> capacity = capacity;

      int elements_len = sizeof (elements);
    this -> elements = new int [elements_len + 1];
    for ( int i = 0; i < elements_len; i++){
        this -> elements[i] = elements[i];
    }
}

 void Set :: resize (){
    this -> capacity * 2;
    //some code

}
 bool Set :: addElement(int const element){
    for ( int i = 0; i < this-> capacity; i++){
        if ( this-> elements[i] == element){
            return false;
        }
    }

    if ( this -> capacity == this -> numElements){
        resize();
    }

     this-> elements [numElements +1] = element;
    return true;
}


bool Set :: deleteElement(int const element){
    for ( int i = 0; i < this-> capacity; i++){
        if ( this-> elements[i] == element){

            //some code


            return true;
        }
    }


    return false;
}

 void Set :: print (){
    for ( int i = 0; i < this-> capacity; i++){
        std :: cout << elements[i];
    }
}

