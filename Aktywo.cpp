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
void Aktywo::setValue(double newValue) {
    value = newValue;
}
Aktywo& Aktywo::operator+=(double ilosc) {
    setQuantity(getQuantity()+ilosc);
    return *this;
}
Aktywo& Aktywo::operator-=(double ilosc) {
    if(getQuantity()-ilosc<0){
        std::cout<<"Za dużo odejmujesz :c"<<std::endl;
        return *this;
    }
    setQuantity(getQuantity()-ilosc);
    return *this;
}
int Aktywo::getQuantity() {
    return quantity;
}

void Aktywo::setQuantity(int newQuantity){
    quantity=newQuantity;
}

void Aktywo::stan(){
    std::cout<<getName()<<" wartość: "<<getValue()<<" ilość: "<<getQuantity()<<std::endl;
}

