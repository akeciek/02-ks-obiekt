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
