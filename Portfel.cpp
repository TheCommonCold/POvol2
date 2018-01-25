//
// Created by Luker on 18.01.2018.
//

#include "Portfel.h"
template <class T> std::vector<T> Portfel<T>::getAktywa(){
    return aktywa;
}

template <class T> void Portfel<T>:: addAktywo(T newAktywo){
    aktywa.push_back(newAktywo);
}
template <class T> void Portfel<T>:: removeAktywo(T removableAktywo){
    if(aktywa.size()>0){
        for(int i=0;i<aktywa.size();i++){
            if(aktywa[i]==removableAktywo){
                aktywa.erase(aktywa.begin()+i);
                break;
            }
        }
    }else std::cout<<"Wybrane aktywo nie istnieje"<<std::endl;
}