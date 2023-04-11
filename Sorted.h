//
// Created by Katerina Dimitrova on 11.04.23.
//

#ifndef TESTTWO_SORTED_H
#define TESTTWO_SORTED_H

#endif //TESTTWO_SORTED_H
#include <iostream>



template <typename T>
class Sorted {

    T*  arr = new T[0];
    int size;
    int capacity = 10;


public:
   Sorted();
   //Sorted();

   void resize(){
       this->capacity *= 2;
       T* copyElements = new T[this->capacity];

       for(int i = 0; i < this->size; i++) {
           copyElements[i] = this->arr[i];
       }

       delete[] this->arr;
       this->arr = copyElements;
   }

   //void copy ( T const* elements, int size , int capacity);

   bool add ( T& elements) {

       if (this->size == this->capacity) {
           this->resize();
       }

       for (int i = 0; i < this->size; i++) {
           if (this->arr[i] == elements) {
               return false;
           }
       }

       bool flag = false;
       int place = 0;
       for (int i = 0; i < this->size; i++) {
           if (this->arr[i] < elements && flag == false) {
               flag = true;
               place = i;

           }
       }
       this->size++;
       T temp;
       for (int i = place; i < this->size + 1; i++) {
           if (i == place) {
               temp = this-> arr[i];
               arr[i] = elements;
           }

           this->arr[i + 1] = temp;
           temp = arr[i+1];
       }

       return true;
   }

   bool remove ( T& elements){
       for(int i = 0; i < this->size; i++) {
           if(this->elements[i] == elements) {
               for(int j = i + 1; j < this->size; j++) {
                   this->arr[j - 1] = this->arr[j];
               }
               this->size--;
               return true;
           }
       }
       return false;
   }

   void print(){
       for ( int i = 0; i <this-> size; i++){
           std:: cout << this -> arr[i]<<std::endl;

       }
   }



    T *getArr() const {
        return this->arr;
    }

    void setArr(T *arr) {
        for ( int i = 0; i < getSize(arr); i++){
            this-> arr [i] = arr[i];
        }
    }

    int getSize() const {
        return this->size;
    }

    void setSize(int size) {
        this->size = size;
    }

    int getCapacity() const {
        return this->capacity;
    }

    void setCapacity(int capacity) {
        this->capacity = capacity;
    }


public:
    virtual ~Sorted() {
    delete [] arr;
    }
};