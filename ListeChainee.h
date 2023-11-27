//
// Created by Qinshu Dai on 27/11/2023.
//

#ifndef TRAJET_LISTECHAINEE_H
#define TRAJET_LISTECHAINEE_H
#include "Node.h"

class ListeChainee {
private:
    Node* head;
public:
    void addTrajet(Trajet* d);
    int nbelement;
};


#endif //TRAJET_LISTECHAINEE_H
