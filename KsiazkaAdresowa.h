#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikMenedzer.h"
#include "AdresatManager.h"
#include "Menu.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenedzer uzytkownikMenedzer;
    AdresatManager *adresatManager;
    const string NAZWA_PLIKU_Z_ADRESATAMI;
    Menu menu;
    void wyswietlMenu();

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami)
     : uzytkownikMenedzer(nazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami), menu(){
        adresatManager = NULL;
        wyswietlMenu();
     };
    ~KsiazkaAdresowa(){
        delete adresatManager;
        adresatManager = NULL;
    };
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogujUzytkownika();

};

#endif
