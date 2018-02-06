class Ulamek {
    int licznik;
    int mianownik;
public:
    Ulamek (int, int);
    void zapisz (int, int);
    void wypisz() {
        cout << licznik << "/" << mianownik;
    }
    int get_l() {
        return licznik;
        }
    int get_m();
    void skracaj();
};  // koniec definicji klasy
