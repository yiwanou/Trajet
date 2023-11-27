//
// Created by Qinshu Dai on 20/11/2023.
//
#include <iostream>
#include <cstring>
#include "Trajet.h"
using namespace std;

Trajet::Trajet (const char* villeDep, const char* villeArr)
{
#ifdef MAP
    cout << "Appel au constructeur de <Trajet>" << endl;
#endif
    villeDepart = new char[strlen(villeDep) + 1];
    strcpy(villeDepart, villeDep);

    villeArrivee = new char[strlen(villeArr) + 1];
    strcpy(villeArrivee, villeArr);

}
Trajet::~Trajet ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Trajet>" << endl;
#endif
    delete [] villeDepart;
    delete [] villeArrivee;

}
