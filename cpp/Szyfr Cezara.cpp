#include <iostream>

using namespace std;

void lower(char tekst[])
{

    while(tekst!='.')
    {
      if(tekst>95)
          cout<<(char)(tekst-32);
      else
        cout<<tekst;
    cin>> tekst;
    }

    cout<<endl;



    }

//funkcja zamienia duże litery na małe
    //użyj pętli do odczytania kolejnych znaków
    //sprawdź kod ASCII znaku
    //jeżeli kod odpowiada dużej literze, podmień znak;

}

void szyfruj(char tekst[], int klucz) {
    int i = 0; // indeks
    klucz = klucz % 26;
    while (tekst[i] != '\0') {
        if ((int)tekst[i] + klucz > 122)
        tekst[i] =(char)((int)tekst[i] + klucz - 26);
        else
            tekst[i] = (char)((int)tekst[i] + klucz);
        tekst[i] = (char)((int)tekst[i] + klucz);
        //(int)tekst[i] - rzutowanie na kod ASCII
        //(char)((int)tekst[i]) - zmiana kodu ASCII na znak
        i++;
    }

    cout << tekst;

}


int main(int argc, char **argv) {
    char tekst[100];
    int klucz = 3;
	cout << "Podaj tekst do zaszyfrowania: " << endl;
    //cin >> tekst;
    cin.getline(tekst, 100);
    cout << "Podaj klucz: ";
    cin >> klucz;
    szyfruj(tekst, klucz);
	return 0;
}

