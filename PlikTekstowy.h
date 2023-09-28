#ifndef PLIKTEKSTOWY_H
#define PLIKTEKSTOWY_H
#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

#include "MetodyPomocnicze.h"
#include "Adresat.h"


class PlikTekstowy
{
    const string NAZWA_PLIKU;
protected:
    fstream plikTekstowy;
    PlikTekstowy(string nazwaPliku) : NAZWA_PLIKU(nazwaPliku) {};
    bool czyPlikJestPusty(fstream &plikTekstowy);
    string getNazwaPliku();
};
#endif // PLIKTEKSTOWY_H
