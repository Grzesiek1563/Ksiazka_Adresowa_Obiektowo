#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include "plikTekstowy.h"
#include "Adresat.h"

using namespace std;

class PlikZAdresatami : public PlikTekstowy
{
    int idOstatniegoAdresata;
    const string NAZWA_TYMCZASOWEGO_PLIKU_Z_ADRESATAMI;
    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
    void usunPlik(string nazwaPlikuZRozszerzeniem);
    void zmienNazwePliku(string staraNazwa, string nowaNazwa);
    int pobierzZPlikuIdOstatniegoAdresata();
public:
    PlikZAdresatami(string NAZWAPLIKUZADRESATAMI) : PlikTekstowy(NAZWAPLIKUZADRESATAMI),
    NAZWA_TYMCZASOWEGO_PLIKU_Z_ADRESATAMI("Adresaci_tymczasowo.txt")
    {
        idOstatniegoAdresata = 0;
    };
    bool dopiszAdresataDoPliku(Adresat adresat);
    vector<Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    void usunAdresataZPliku(int idUsuwanegoAdresata);
    void edytujAdresataWPliku(Adresat adresat);
    int pobierzIdOstatniegoAdresata();
    void ustawIdOstatniegoAdresataPoUsunieciuWybranegoAdresata(int idUsuwanegoAdresata);
};

#endif
