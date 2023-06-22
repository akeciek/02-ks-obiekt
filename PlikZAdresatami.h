#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <cstdlib>

#include "Adresat.h"
#include "Uzytkownik.h"
#include "MetodyPomocnicze.h"


using namespace std;

class PlikZAdresatami
{
    int idOstatniegoAdresata;
    const string nazwaPlikuZAdresatami;
    vector <Adresat> adresaci;

    string pobierzLiczbe(string tekst, int pozycjaZnaku);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    void wyswietlDaneAdresata(Adresat adresat);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);

public:
    PlikZAdresatami(string NAZWAPLIKUZADRESATAMI) : nazwaPlikuZAdresatami(NAZWAPLIKUZADRESATAMI) {
        idOstatniegoAdresata = 0;
    };
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    void dodajAdresata(int idZalogowanegoUzytkownika);
    void dopiszAdresataDoPliku(Adresat adresat);
    void zmianaHaslaZalogowanegoUzytkownika(int idZalogowanegoUzytkownika);
    void aktualizujIdOstatniegoAdresata();
    vector <Adresat> wczytajWszystkichAdresatowZPliku();
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);
    void wyswietlWszystkichAdresatow(int idZalogowanegoUzytkownika);

};

#endif
