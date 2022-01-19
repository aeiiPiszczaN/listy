//
// Created by jpisz on 19.01.2022.
//

#include "listy.h"

void addFront(Lista *&start){
    Lista *p;

    for(int i=0; i<10; i++){
        p = new Lista;
        p->_var = i;
        p->_wsk = start;
        start = p;
    }
};

void printList(Lista *&start){
    Lista *p;
    p=start;
    while(p) {
        std::cout<< p->_var << " ";
        p = p->_wsk;
    }
    std::cout << "\n";
};

void deleteList(Lista *&start){
    Lista *p;
    std::cout << "\n\n-------DELETING-------\n\n";

    while (start) {
        p = start;
            std::cout << " Before: " << start->_var << " ";
        start = start->_wsk;
            std::cout << " After: " << start->_var << "\n";
        delete p;
    }
};

void testPointer(){
    int test = 2;
    std::cout << "Variable 'test': " << test << "\n";
    int *testPtr = &test;
    std::cout << "Pointer 'test': " << *testPtr << " " << testPtr << " " << &testPtr <<  "\n";
    delete testPtr;
    std::cout << "Pointer 'test': " << &testPtr <<  "\n";
}
