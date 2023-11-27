//
// Created by Qinshu Dai on 27/11/2023.
//

#include "ListeChainee.h"
#include <Node.h>



ListeChainee::void addTrajet(Trajet *d) {
    Node *newNode = new Node(d);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node *temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}


