//
// Created by Qinshu Dai on 20/11/2023.
//
#include <iostream>
#include <cstring>
#include "Trajet.h"
using namespace std;

Trajet::Trajet (const char* villeDepart, const char* villeArrivee)
{
#ifdef MAP
    cout << "Appel au constructeur de <Trajet>" << endl;
#endif
    new
}
Trajet::~Trajet ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Trajet>" << endl;
#endif
    delete [] ;
    delete [] ;

}