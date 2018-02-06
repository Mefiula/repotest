/*
 * tabela.cpp
 * 
 * 
 */


#include <iostream>
//--------------------------------------------
int main()
{
    using namespace std;
    //Tworzenie tablic
    int tab1[ WIELKOSC_TAB ]; //Tablica liczb
    char tab4[ 2 ]; //Tablica znaków
   
    //Przypisywanie wartości
    tab1[ 0 ] = 1; //pierwszy element tabeli
    tab1[ 1 ] = 2; //drugi element tabeli
    tab1[ 2 ] = 3; //trzeci element tabeli
    tab1[ 3 ] = 4; //czwarty element tabeli
    tab1[ 4 ] = 5; //piąty element tabeli
   

    //możliwości użycia tablic
    cout << "Oto dane zawarte w tab1:\n"
    << "\nFord - " << tab1[ 0 ]
    << "\nOpel  - " << tab1[ 1 ]
    << "\nVolkwswagen  - " << tab1[ 2 ]
    << "\nPorshe - " << tab1[ 3 ]
    << "\nFiat - " << tab1[ 4 ]
    << "\nBMW  - " << tab1[ 5 ]
    << endl << endl;
   
    cout << "Nalezy pamietac, by nie przekroczyc "
    << tab2[ 0 ] << tab2[ 1 ] << tab2[ 2 ] << tab2[ 3 ]
    << tab2[ 4 ] << " indeksu tabeli." << endl;
   
    //przypisywanie zmiennych między tablicami
    tab4[ 0 ] = tab2[ 0 ];
    tab4[ 1 ] = tab2[ 4 ];
   
    cout << "Jezeli tabela ma miec 5 elementow "
    "to jej ostatni element ma " << tab4[ 0 ]
    << tab4[ 1 ] << " indeksu rowny " << tab1[ 3 ]
    << "!" << endl << endl;
   
    //Tablica nie wypełniona całkowicie
    cout << "tab3 zawiera takie dane:\n"
    << "1- " << tab3[ 0 ] << endl
    << "2- " << tab3[ 1 ] << endl
    << "3- " << tab3[ 2 ] << endl
    << "4- " << tab3[ 3 ] << endl;
   
    return 0;
}

