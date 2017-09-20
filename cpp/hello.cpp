/*
 * hello.cxx
 * 
 * 
 */


#include <iostream>
using namespace std;

#define ROK_TERAZ 2017
#define ROK_CPP 1983

int parzyste(int n)
{
    int i;
    for (i=0; i <=n;i+=2)
        cout << i << " ";
    return i / 2;
}

int main(int argc, char **argv)
{
    int wiek, rok_urodzenia;
    string tekst;
    cout << "Jak masz na imię ?" << endl;
    cin >> tekst;
	cout << "Witaj " << tekst << "!" << endl;
    cout << "Ile masz lat ?" << endl;
    cin >> wiek; 
    cout << " Ooooooo ja prawie tyle samo Wo :o" << endl;
    rok_urodzenia = ROK_TERAZ - wiek;
    cout << "Bo tak wgl urodziłeś się w " << rok_urodzenia << endl;
    
    if (rok_urodzenia  > ROK_CPP) {
        cout << "Jestem starszy HE !" << endl;
    }
    else if (rok_urodzenia < ROK_CPP) {
        cout << "Jestem młodszy :c " << endl;
    }
    else if (rok_urodzenia == ROK_CPP) {
        cout << "Jesteśmy w tym samym wieku :3 " << endl;
    }
    int n;
    cout << "Podaj liczbę naturalną: ";
    cin >> n;
    cout << "Ilość parzystych: " << parzyste(n);

	return 0;
}

