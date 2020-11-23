#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
#include "UzytkownikMenedzer.h"

using namespace std;

class KsiazkaAdresowa {
    UzytkownikMenedzer uzytkownikMenedzer;
    int idZalogowanegoUzytkownika;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami) : uzytkownikMenedzer(nazwaPlikuZUzytkownikami) {
        uzytkownikMenedzer.wczytajUzytkownikowZPliku();
        idZalogowanegoUzytkownika = 0;
        };
    void rejestracjaUzytkownika();
    void logowanieUzytkownika();

    int pobierzIdZalogowanegoUzytkownika();
};

#endif // KSIAZKAADRESOWA_H
