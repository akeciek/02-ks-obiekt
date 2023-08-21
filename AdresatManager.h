#ifndef ADRESTAMANAGER_H
#define ADRESTAMANAGER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "PlikZAdresatami.h"


using namespace std;

class AdresatManager
{
    PlikZAdresatami plikZAdresatami;
    vector <Adresat> adresaci;
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;


public:
    AdresatManager(string NAZWA_PLIKU_Z_ADRESATAMI, int idZalogowanegoUzytkownika) : plikZAdresatami(NAZWA_PLIKU_Z_ADRESATAMI), ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika)
    {
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void aktualizujIdOstatniegoAdresata();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    void usunAdresata();
    void edytujAdresata();

};

#endif
