//
// Created by Katerina Dimitrova on 23.05.23.
//
#include "DarkChocolate.h"
#include <iostream>

bool DarkChocolate :: validId( string id){
    for ( int i = 0; i < id.length(); i++){

        if ( id[i]<65 || id[i] > 122){
            return false;
        }else if( id[i]>90 && id[i]<97){
            return false;
        }
    }
    return true;
}

DarkChocolate :: DarkChocolate(int percentageCoco, string id):Chocolate(id){
    this->percentageCoco = percentageCoco;
    if (!validId(id)){
        std :: cout <<"The id must contain only letters!"<<std::endl;
    }
};
