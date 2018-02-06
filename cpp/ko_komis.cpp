
#include <iostream>
#include "ul_ulamek.h"

using namespace std;

Samochod::Samochod(int l) {
    spalanie = l;
    if (l != 0);
    else {
        cout << "Spalanie nie może być zerowe !!" << endl;
        exit(1);
    }
}



void Samochod::zapisz(int l) {
    spalanie = l;
    if (l != 0) cout << spalanie << endl;
    else {
        cout << "Spalanie nie może być zerowe !!" << endl;
        exit(1);
    }
}


void Samochod::wypisz() {
    cout << spalanie;
}


