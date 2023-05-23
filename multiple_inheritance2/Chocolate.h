//
// Created by Katerina Dimitrova on 23.05.23.
//

#ifndef MULTIPLE_INHERITANCE_CHOCOLATE_H
#define MULTIPLE_INHERITANCE_CHOCOLATE_H

template<typename T>
class Chocolate{

private:

    T id;

public:
    Chocolate(T id);
};

template<typename T>
Chocolate <T>:: Chocolate(T id){
    this->id = id;
}

#endif //MULTIPLE_INHERITANCE_CHOCOLATE_H
