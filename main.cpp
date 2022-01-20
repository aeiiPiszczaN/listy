#include <iostream>
#include "listy.h"
#include <vector>

int main() {

    Elem *start;
    start = nullptr;

    std::vector<int> liczby1;
    liczby1.push_back(4);
    std::vector<int> liczby2;
    liczby2.push_back(5);

    addFront(start,liczby1);
    addFront(start,liczby2);
    addBack(start, liczby2);

    printList(start);
    std::cout << "\nTest przed usunieciem: " << start->nastepny->wartosc[0] << "\n\n";
    testPointer();
    deleteList(start);
    std::cout << "\nTest po usunieciu: ";


    return 0;
}
