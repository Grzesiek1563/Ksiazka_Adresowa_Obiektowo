#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

int KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikMenedzer.logowanieUzytkownika();
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer = new AdresatMenedzer (NAZWA_PLIKU_Z_ADRESATAMI, uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
    }
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wylogujUzytkownika()
{
    uzytkownikMenedzer.wylogujUzytkownika();
    delete adresatMenedzer;
    adresatMenedzer = NULL;
}
int KsiazkaAdresowa::pobierzIdZalogowanegoUzytkownika()
{
    uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::dodajAdresata()
{
    if(uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer->dodajAdresata();
    }
    else
    {
        cout<<"Aby dodac adresata, nalezy najpierw sie zalogowac"<<endl;
        system("pause");
    }
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    adresatMenedzer->wyswietlWszystkichAdresatow();
}

bool KsiazkaAdresowa::czyUzytkownikJestZalogowany()
{
    uzytkownikMenedzer.czyUzytkownikJestZalogowany();
}
