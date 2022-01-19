//
// Created by jpisz on 19.01.2022.
//

#ifndef LISTY_LISTY_H
#define LISTY_LISTY_H

#include <iostream>

struct Lista {
    int _var;
    Lista *_wsk;
};

void testPointer();
void addFront(Lista *&start);
void printList(Lista *&start);
void deleteList(Lista *&start);

#endif //LISTY_LISTY_H
