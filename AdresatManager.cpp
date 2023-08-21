#include "AdresatManager.h"

void AdresatManager::dodajAdresata()
{
    plikZAdresatami.dodajAdresata(ID_ZALOGOWANEGO_UZYTKOWNIKA);
}

void AdresatManager::wyswietlWszystkichAdresatow()
{
    plikZAdresatami.wyswietlWszystkichAdresatow(ID_ZALOGOWANEGO_UZYTKOWNIKA);
}

void AdresatManager::aktualizujIdOstatniegoAdresata()
{
    plikZAdresatami.aktualizujIdOstatniegoAdresata();
}

void AdresatManager::wyszukajAdresatowPoImieniu()
{
    plikZAdresatami.wyszukajAdresatowPoImieniu(ID_ZALOGOWANEGO_UZYTKOWNIKA);
}

void AdresatManager::wyszukajAdresatowPoNazwisku()
{
    plikZAdresatami.wyszukajAdresatowPoNazwisku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
}

void AdresatManager::usunAdresata()
{
    plikZAdresatami.usunAdresata(ID_ZALOGOWANEGO_UZYTKOWNIKA);
}

void AdresatManager::edytujAdresata()
{
    plikZAdresatami.edytujAdresata(ID_ZALOGOWANEGO_UZYTKOWNIKA);
}
