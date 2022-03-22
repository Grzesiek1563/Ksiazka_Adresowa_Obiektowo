#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>

#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "UzytkownikMenedzer.h"
#include "plikZAdresatami.h"

using namespace std;

class AdresatMenedzer
{
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    vector <Adresat> adresaci;
    Adresat podajDaneNowegoAdresata();
    void wyswietlDaneAdresata(Adresat adresat);
    PlikZAdresatami plikZAdresatami;
    void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);
    int podajIdWybranegoAdresata();
public:
    AdresatMenedzer(string NAZWAPLIKUZADRESATAMI, int IDZALOGOWANEGOUZYTKOWNIKA)
    : plikZAdresatami(NAZWAPLIKUZADRESATAMI), ID_ZALOGOWANEGO_UZYTKOWNIKA(IDZALOGOWANEGOUZYTKOWNIKA)
    {
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    void usunAdresata();
    void edytujAdresata();
};

#endif

