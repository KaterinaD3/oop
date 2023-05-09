//
// Created by Katerina Dimitrova on 9.05.23.
//

#ifndef TEMPLATES_MYVECTOR_H
#define TEMPLATES_MYVECTOR_H
#include <iostream>

int const INITIAL_CAPACITY = 10;
template <typename T>
class MyVector {
private:
    T* elements;
    int numElements;
    int capacity;

public:

    void copy(T const* elements, int numElements, int capacity);
    void resize();
    void addElement ( T element);
    MyVector();
    MyVector(MyVector const& other);
    MyVector& operator= (MyVector const& other);
    ~MyVector();
    MyVector& operator[] (int index);
     void apply(T(*func) (T&));

};

template<typename T>
void MyVector<T> :: copy(T const* elements, int numElements, int capacity){
    this->capacity = capacity;
    this->numElements = numElements;

    if (this->elements != nullptr) {
        delete[] this->elements;
    }


    this->elements = new T [this->capacity];
    for(int i = 0; i < this->numElements; i++) {
        this->elements[i] = elements[i];
    }
}


template<typename T>
void MyVector<T> ::resize() {
    this->capacity *= 2;
    int* copyElements = new T[this->capacity];

    for(int i = 0; i < this->numElements; i++) {
        copyElements[i] = this->elements[i];
    }

    delete[] this->elements;
    this->elements = copyElements;
}


template<typename T>
void  MyVector<T> ::addElement(T element) {
    if(this->numElements == this->capacity) {
        this->resize();
    }
   bool isThere = false;
    for(int i = 0; i < this->numElements; i++) {
        if(this->elements[i] == element) {
           std::cout<<"This element is already in the vector"<<std::endl;
           isThere = true;
        }
    }
    if (!isThere) {
        this->elements[this->numElements] = element;
        this->numElements++;
    }
}



template<typename T>
  MyVector<T> ::MyVector() {
    this->numElements = 0;
    this->capacity = INITIAL_CAPACITY;
    this->elements = new T[this->capacity];

  }

template<typename T>
MyVector<T> ::MyVector(const MyVector<T> &other) {
    this->copy(other.elements, other.numElements, other.capacity);
}


template<typename T>
MyVector<T>& MyVector<T> :: operator= ( const MyVector<T>& other){
    if (this != &other) {
        this->copy(other.elements, other.numElements, other.capacity);
    }

    return *this;
}
template<typename T>
MyVector<T> :: ~MyVector(){
 delete [] elements;
}

template<typename T>
MyVector<T>& MyVector<T> ::operator[](int index) {
if (index >= this->numElements){
    std::cout <<"Array index out of bound, exiting"<<std::endl;
    exit(0);
}
    return this->elements[index];

 }
#endif //TEMPLATES_MYVECTOR_H
