#ifndef UCZNIOWIE_HPP
#define UCZNIOWIE_HPP
#include <iostream>

using namespace std;

class Uczniowie{
private:
    int imie;
    int nazwisko;
    int klasa;
    
public:
    
    Uczniowie();
    Uczniowie(string, string);
    Uczniowie(string, string, string);
    ~Uczniowie();
    
    void ustawDaneUcznia(string, string);
    void ustawKlase(string);
    void wypiszOceny();
    void dodajOcene(int);

    float srednia();
    
    int zwrocNazwe();
};

#endif
