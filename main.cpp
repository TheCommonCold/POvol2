#include <iostream>
#include "Portfel.h"
#include "Aktywo.h"

int main() {
    int state=0;
    int choice;
    Portfel<Aktywo> portfel;
    while(true){
        switch(state){
            case 0:
            std::cout<<"Stan oszczędności: "<<portfel.getValue()<<std::endl;
                std::cout<<"Prosze wybrac opcje"<<std::endl;
                std::cout<<"Aby zobaczyć stan oszczędności wpisz 0"<<std::endl;
                std::cout<<"Aby zobaczyć stan każdego aktywa wpisz 1"<<std::endl;
                std::cout<<"Aby dodać nowe aktywo wpisz 2"<<std::endl;
                std::cout<<"Aby wejsc do menu aktyw wpisz 3"<<std::endl;
                break;
            case 1:
                portfel.stan();
                break;
            case 2:

                break;
            case 3:
                break;
            default:
            std::cout<<"Niewlasciwa wartosc"<<std::endl;
        }
        std::cin>>choice;
        state=choice;
    }
    return 0;
}