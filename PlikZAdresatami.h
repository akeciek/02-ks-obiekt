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
#include "PlikTekstowy.h"



using namespace std;

class PlikZAdresatami : public PlikTekstowy
{
    int idOstatniegoAdresata;
    const string NAZWA_PLIKU_Z_ADRESATAMI;
    vector <Adresat> adresaci;
    int idUsuwanegoAdresata;

    string pobierzLiczbe(string tekst, int pozycjaZnaku);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    void wyswietlDaneAdresata(Adresat adresat);
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);
    void wyswietlWszystkichAdresatow();
    void zaktualizujDaneWybranegoAdresata(Adresat adresat, int nr_linii);
    int podajIdWybranegoAdresata();
    void edytujWybranaLinieWPliku(int nr_linii, string liniaZDanymiAdresataOddzielonePionowymiKreskami);
    char wybierzOpcjeZMenuEdycja();
    void usunPlik(string nazwaPlikuZRozszerzeniem);
    void zmienNazwePliku(string staraNazwa, string nowaNazwa);
    void usunWybranaLinieWPliku(int numerUsuwanejLinii);

public:
    PlikZAdresatami(string NAZWAPLIKUZADRESATAMI) : NAZWA_PLIKU_Z_ADRESATAMI(NAZWAPLIKUZADRESATAMI) {
        idOstatniegoAdresata = 0;
    };
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    void dodajAdresata(int idZalogowanegoUzytkownika);
    bool dopiszAdresataDoPliku(Adresat adresat);
    void zmianaHaslaZalogowanegoUzytkownika(int idZalogowanegoUzytkownika);
    void aktualizujIdOstatniegoAdresata();
    vector <Adresat> wczytajWszystkichAdresatowZPliku();
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);
    void wyswietlWszystkichAdresatow(int idZalogowanegoUzytkownika);
    void wyszukajAdresatowPoImieniu(int idZalogowanegoUzytkownika);
    void wyszukajAdresatowPoNazwisku(int idZalogowanegoUzytkownika);
    void usunAdresata(int idZalogowanegoUzytkownika);
    void edytujAdresata(int idZalogowanegoUzytkownika);

};

#endif
