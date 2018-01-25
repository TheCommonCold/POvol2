//
// Created by Luker on 18.01.2018.
//

#include "Aktywo.h"
std::string Aktywo::getName(){
    return name;
}
void Aktywo::setString(std::string newName){
    name=newName;
}
double Aktywo::getValue(){
    return value;
}
void Aktywo::setValue(double newValue){
    value=newValue;
}