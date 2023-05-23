//
// Created by Katerina Dimitrova on 23.05.23.
//
#include "MilkChocoWithRaisins.h"
#include <iostream>

 bool MilkChocoWithRaisins :: validId (int id){

}

MilkChocoWithRaisins :: MilkChocoWithRaisins(int id, int percentageMilk, int percentageRaisins): MilkChocolate(percentageMilk,id),
                                                                                                 Raisins(percentageRaisins,id),
                                                                                                 Chocolate<int>(id){
    if (!validId(id)){
        std::cout <<"The id must start with 45"<<std::endl;
    }
}
