#include <iostream>
#include <cstring>
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
int main() {
     Cat a("a", "cat");
     Cat b( "b","cat");
     Cat c( "c","cat");

     Dog d("d","dog");
     Dog e ("e", "dog");

     Animal* animal[] = {&a, &b, &c, &d, &e};


      for ( int i = 0; i < 5; i++){

          animal[i]->talk();
      }

    return 0;
}
