//
// Created by Qinshu Dai on 20/11/2023.
//

#ifndef TRAJET_TRAJET_H
#define TRAJET_TRAJET_H

//print trajet
#include <iostream>

class Trajet {
public:

    Trajet(const char *villeDep, const char *villeArr);

    virtual ~Trajet( );
    // add two trajets
    virtual void show(){
        std::cout << "Departure: " << villeDepart << ", Arrival: " << villeArrivee << std::endl;
    }
    friend std::ostream& operator<<(std::ostream& os,Trajet &t);

    const char *GetArrive() const{
        return villeArrivee;
    }
    const char *GetDepart() const{
        return villeDepart;
    }
protected:
    char *villeArrivee;
    char *villeDepart;
};

std::ostream& operator<<(std::ostream& os,Trajet &t){
    t.show();
    return os;
}


#endif //TRAJET_TRAJET_H
