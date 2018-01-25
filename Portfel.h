//
// Created by Luker on 18.01.2018.
//

#ifndef POVOL2_PORTFEL_H
#define POVOL2_PORTFEL_H
#include <iostream>
#include <vector>
#include "Aktywo.h"


template <class T> class Portfel {
private:
    std::vector<T> aktywa;
public:
    std::vector<T> getAktywa();
    void addAktywo(T newAktywo);
    void removeAktywo(T removableAktywo);
};


#endif //POVOL2_PORTFEL_H
