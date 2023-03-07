//
// Created by Katerina Dimitrova on 7.03.23.
//

#ifndef OOP_SET_H
#define OOP_SET_H

#endif //OOP_SET_H


class Set {

  int* elements;

    int numElements;
    int capacity;

    void resize();

public:
    Set();
    Set(Set const& other);
    Set& operator= (Set const& other);
    ~Set();

    bool addElement(int const element);
    bool deleteElement(int const element);
    void setUnion(Set const& other);
    void setIntersection(Set const& other);
    void print();
    void copy (int const* elements, int numElements, int capacity);

};