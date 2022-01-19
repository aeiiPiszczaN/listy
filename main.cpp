#include <iostream>
#include "listy.h"

int main() {

    int test = 2;
    std::cout << "Variable 'test': " << test << "\n";
    int *testPtr = &test;
    std::cout << "Pointer 'test': " << *testPtr << " " << testPtr << " " << &testPtr <<  "\n";
    delete testPtr;
    std::cout << "Pointer 'test': " << &testPtr <<  "\n";
    /////////
    Lista *start;
    start = nullptr;

    addFront(start);
    printList(start);
    std::cout << "\nTest przed usunieciem: " << start->_wsk->_var << "\n\n";
    //testPointer();
    deleteList(start);
    std::cout << "\nTest po usunieciu: ";


    return 0;
}
