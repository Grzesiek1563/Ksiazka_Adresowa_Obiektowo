#include <iostream>
#include <cstdlib>
#include "KsiazkaAdresowa.h"
#include "UzytkownikMenedzer.h"
#include "MetodyPomocnicze.h"
using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy2.txt");

    char wybor;
    while (true)
    {
        if (ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika() == 0)
        {
            wybor = MetodyPomocnicze::wybierzOpcjeZMenuGlownego();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                ksiazkaAdresowa.logowanieUzytkownika();
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
        else
        {
            ksiazkaAdresowa.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika());
            wybor = MetodyPomocnicze::wybierzOpcjeZMenuUzytkownika();
            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.dodajAdresata(ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika());
                break;
            case '2':
                ksiazkaAdresowa.wyswietlWszystkichAdresatow(ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika());
                break;
            case '3':
                ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
                break;
            case '4':
                ksiazkaAdresowa.wylogujUzytkownika();
                break;
            }
        }
    }
    return 0;
}
