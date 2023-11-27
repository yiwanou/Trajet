//
// Created by Qinshu Dai on 27/11/2023.
//

#ifndef TRAJET_NODE_H
#define TRAJET_NODE_H
#include "Trajet.h"

class Node {
public:
    Node(Trajet *t);
    virtual ~Node ( );
protected:
    Trajet* t;
    Node * next;

};


#endif //TRAJET_NODE_H
