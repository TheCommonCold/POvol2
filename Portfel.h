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
    double value=0;
public:
    Portfel(){};
    ~Portfel(){};
    Aktywo& operator+=(T newAktywo){
        aktywa.push_back(newAktywo);
    }
    std::vector<T> getAktywa(){
        return aktywa;
    }
    void addAktywo(T newAktywo){
        aktywa.push_back(newAktywo);
    }
    void removeAktywo(T removableAktywo){
        if(aktywa.size()>0){
            for(int i=0;i<aktywa.size();i++){
                if(aktywa[i]==removableAktywo){
                    aktywa.erase(aktywa.begin()+i);
                    break;
                }
            }
        }else std::cout<<"Wybrane aktywo nie istnieje"<<std::endl;
    }
    void setValue(double newValue){
        value=newValue;
    }
    double getValue(){
        return value;
    }
    void stan(){
        for(int i=0;i<aktywa.size();i++){
            aktywa[i].stan();
        }
    }
    Portfel& operator+=(T noweAktywo){
        aktywa.push_back(noweAktywo);
        return *this;
    }
    Portfel& operator-=(int which){
        if(which>aktywa.size())
        {
            std::cout<<"Zly indeks "<<std::endl;
        }else
        {
            aktywa.erase(aktywa.begin()+which);
        }
    }
};
#endif //POVOL2_PORTFEL_H
