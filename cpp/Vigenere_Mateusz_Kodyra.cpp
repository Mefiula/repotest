#include <iostream>
#include <string>
#include <cstdlib>
#include <ctype.h>

using namespace std;

void oczysc(string & docT, string zrT, string & docK, string zrK)
{
	for (int i = 0; i < zrT.length(); i++)
		if (zrT[i] != ' ')
			docT += toupper(zrT[i]);

	size_t poz = zrK.find(' ');
	if (poz != string::npos)
	{
		zrK.erase(poz, 1);
		do {
			poz = zrK.find(' ', poz + 1);
			if (poz != string::npos)
				zrK.erase(poz, 1);
		} while (poz != string::npos);
	}

	for (int i = 0; i < docT.length(); i++)
		docK += toupper(zrK[i % zrK.length()]);
}

void szyfruj(string tekst, string klucz)
{
	char tab[26][26];
	string kluczCaly = "";
	string tekstPop = "";
	string szyfrogram = "";

	for (int i = 0; i < 26; i++)
		for (int j = 0; j < 26; j++)
		{
			if (i + j + 65 > 90)
				tab[i][j] = char(i + j + 65 - 26);
			else
				tab[i][j] = char(i + j + 65);
		}

	oczysc(tekstPop, tekst, kluczCaly, klucz);

	for (int i = 0; i < kluczCaly.length(); i++)
		szyfrogram += tab[int(tekstPop[i]) - 65][int(kluczCaly[i]) - 65];

	cout << szyfrogram << endl;
}

void deszyfruj(string tekst, string klucz)
{
	char tab[26][26];
	string kluczCaly = "";
	string tekstPop = "";
	string szyfrogram = "";
	string wiadomosc = "";

	for (int i = 0; i < 26; i++)
		for (int j = 0; j < 26; j++)
		{
			if (i + j + 65 > 90)
				tab[i][j] = char(i + j + 65 - 26);
			else
				tab[i][j] = char(i + j + 65);
		}

	oczysc(tekstPop, tekst, kluczCaly, klucz);

	for (int i = 0; i < kluczCaly.length(); i++)
		szyfrogram += char(((26 - (int(kluczCaly[i]) - 65)) % 26) + 65);

	cout << szyfrogram << endl;

	for (int i = 0; i < kluczCaly.length(); i++)
		wiadomosc += tab[int(szyfrogram[i]) - 65][int(tekstPop[i]) - 65];

	cout << wiadomosc << endl;
}

int main()
{
    string tekst, klucz;
    cout << "Podaj tekst do zaszyfrowania: ";
    getline(cin, tekst);

    cout << "Podaj klucz szyfrowania: ";
    getline(cin, klucz);

	deszyfruj(tekst, klucz);

	system("Pause");
}
