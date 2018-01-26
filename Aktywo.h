//
// Created by Luker on 18.01.2018.
//

#ifndef POVOL2_AKTYWO_H
#define POVOL2_AKTYWO_H
#include <string.h>
#include <iostream>

class Aktywo {
private:
    std::string name;
    double value;
    int quantity;
public:
    std::string getName();
    void setString(std::string newName);
    double getValue();
    void setValue(double newValue);
    int getQuantity(int quantity);
    void setQuantity();
};


#endif //POVOL2_AKTYWO_H
