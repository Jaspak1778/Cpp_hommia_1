#include <iostream>
#include <clocale>
#include "prg.h" // Täältä löytyy ohjeet funktioiden käyttöön

using namespace std;

int main() {
    setlocale(LC_ALL, "fi-FI"); //Ääkkösten yhteeensopivuus
    int valinta;

    cout << "Minkä ohjelman haluat ajaa?" << endl;
    cout << "1: Muunnakurssi" << endl;
    cout << "2: Laske ympyrän pinta-ala" << endl;
    cout << "3: Laskin" << endl;
    cout << "Anna valinta ja paina enter: ";
    cin >> valinta;

    switch (valinta) 
    {
        case 1: muunnakurssi(); break;
        case 2: laskeympyranala(); break;
        case 3: laskin(); break;
        default: cout << "Virheellinen valinta."; break;
    }

    return 0;
}