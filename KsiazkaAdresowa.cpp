#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
   uzytkownikMenedzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikMenedzer.logowanieUzytkownika();
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatManager = new AdresatManager(NAZWA_PLIKU_Z_ADRESATAMI, uzytkownikMenedzer.ustawIDzalogowanegourzytkownika());
    }
}

void KsiazkaAdresowa::wylogujUzytkownika()
{
    uzytkownikMenedzer.wylogujUzytkownika();
    delete adresatManager;
    adresatManager = NULL;
}

void KsiazkaAdresowa::wyswietlMenu()
{
            while (true) {
            switch (menu.wybierzOpcjeZMenuGlownego()) {
            case '1':
                rejestracjaUzytkownika();
                break;
            case '2':
                logowanieUzytkownika();
                adresatManager->aktualizujIdOstatniegoAdresata();

                if (uzytkownikMenedzer.ustawIDzalogowanegourzytkownika() != 0)
                {
                    bool kontynuuj = true;

                    while (kontynuuj == true) {
                        switch(menu.wybierzOpcjeZMenuUzytkownika())
                        {
                        case '1':
                            adresatManager->dodajAdresata();
                            break;
                        case '4':
                            adresatManager->wyswietlWszystkichAdresatow();
                            break;
                        case '7':
                            uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
                            break;
                        case '8':
                            kontynuuj = false;
                            wylogujUzytkownika();
                            break;
                        }
                    }
                }
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        }
}
