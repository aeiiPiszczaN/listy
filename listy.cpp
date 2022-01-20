//
// Created by jpisz on 19.01.2022.
//

#include "listy.h"

void addFront(Elem *&start, std::vector<int> wartosci){
    Elem *nowy = new Elem;
    nowy->wartosc = wartosci;
    nowy->nastepny = start;
    start = nowy;

    /*for(int i=0; i<10; i++){
        p = new Lista;
        p->wartosc = i;
        p->nastepny = start;
        start = p;
    }*/
};

void addBack(Elem *&start, std::vector<int> wartosci){
    Elem *nowy = new Elem;

    if(start){

        Elem *p = start;

        while(p->nastepny) {
            p = p->nastepny;
        }

        p->nastepny = nowy;
        nowy->nastepny = nullptr;
        nowy->wartosc = wartosci;

    } else {

        nowy->wartosc = wartosci;
        nowy->nastepny = start;
        start = nowy;

    }
}

void printList(Elem *&start){
    Elem *p;
    p=start;
    while(p) {
        std::cout<< p->wartosc[0] << " ";
        p = p->nastepny;
    }
    std::cout << "\n";
};

void deleteList(Elem *&start){
    Elem *p;
    std::cout << "\n\n-------DELETING LIST-------\n\n";

    while (start) {
        p = start;
            std::cout << " Before: " << start->wartosc[0] << " ";
        start = start->nastepny;
            std::cout << " After: " << start->wartosc[0] << "\n";
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
