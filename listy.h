//
// Created by jpisz on 19.01.2022.
//

#ifndef LISTY_LISTY_H
#define LISTY_LISTY_H

#include <iostream>
#include <vector>

struct Elem {
    std::vector<int> wartosc;
    Elem *nastepny;
};

void testPointer();
void addFront(Elem *&start, std::vector<int> wartosci);
void addBack(Elem *&start, std::vector<int> wartosci);
void printList(Elem *&start);
void deleteList(Elem *&start);

#endif //LISTY_LISTY_H
