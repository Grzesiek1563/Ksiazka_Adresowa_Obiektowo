#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
//#include <vector>
#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "UzytkownikMenedzer.h"
#include "plikZAdresatami.h"

using namespace std;

class AdresatMenedzer
{
    vector <Adresat> adresaci;
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika);
    void wyswietlDaneAdresata(Adresat adresat);
    void dopiszAdresataDoPliku(Adresat adresat);
    PlikZAdresatami plikZAdresatami;
public:
    void dodajAdresata(int idZalogowanegoUzytkownika);
    void wyswietlWszystkichAdresatow(int idZalogowanegoUzytkownika);
    int wyznaczIdAdresata();
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
};

#endif

