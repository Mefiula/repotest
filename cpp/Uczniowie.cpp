#include "Uczniowie.hpp"
#include <iostream>

using namespace std;

Uczniowie::Uczniowie()
{}

Uczniowie::Uczniowie(int i, int n, int k){
    imie = i;
    nazwisko = n;
    klasa = k;
}

Uczniowie::Uczniowie(int i, int n){
    imie = i;
    nazwisko = n;
}


Uczniowie::~Uczniowie()
{}

void Uczniowie::DaneUcznia(int i, int n){
    imie = i;
    nazwisko = n;
}

void Uczniowie::ustawKlase(int k){
    klasa = k;
}

void Uczniowie::wypiszOceny(){
    cout << "Oceny ucznia " << imie << " " << nazwisko << ":" << endl;
    
    if(oceny.size() != 0)
        for( int i = 0; i < oceny.size(); i++)
            cout << oceny[i] << endl;
}

void Uczniowie::dodajOcene(int o){
    if(o < = 6 && o >= 1)
        oceny.push_back(o);
}

float Uczniowie::srednia()
{
    int p = 0;

    if(oceny.size() != 0){
        for( int i = 0; i < oceny.size(); i++)
            p += oceny[i];
    }else{
        cout << "Nie podano zadnej oceny !" << endl;
        exit(1);
    }
}

void Uczniowie::zwrocNazwe(){
    return (imie + " " + nazwisko);
}
