#include "prg.h"     // Oma header ensin
#include <iostream>  // Tarvittavat kirjastot
#include <cmath>

using namespace std;

void muunnakurssi()

{
	double markat, kurssi;

	kurssi = 5.94573;
	cout << "Syötä jokin markkamäärä: ";
	cin >> markat;
	cout << "Markat euroina: " << markat / kurssi << endl;

};

void laskeympyranala()

{
	double pi = 3.141592653589793;
	double säde;

	cout << "Anna ympyrän säde: ";
	cin >> säde;

	double ala = pi * (säde * säde);
	cout << "Ympyrän ala annetulla säteellä: " << ala << endl;

};

void laskin()

{
	int luku_1, luku_2;

	cout << "Syötä ensimmäinen kokonaisluku: ";
	cin >> luku_1;
	cout << "Syötä toinen kokonaisluku: ";

	cin >> luku_2;

	int summa = luku_1 + luku_2;
	int erotus = luku_1 - luku_2;
	int tulo = luku_1 * luku_2;
	int jakojaannos = luku_1 % luku_2;

	cout << luku_1 << "+" << luku_2 << " = " << summa << endl;
	cout << luku_1 << "-" << luku_2 << " = " << erotus << endl;
	cout << luku_1 << "*" << luku_2 << " = " << tulo << endl;
	cout << "Jakojäännös: " << jakojaannos << endl;
	
};

void hypotenuusa()

{
	int kateetti_a, kateetti_b;

	cout << "Anna ensimmäisen kateetti: ";
	cin >> kateetti_a;
	cout << "Anna toinen kateetti: ";
	cin >> kateetti_b;
	double hypotenuusa = sqrt(kateetti_a * kateetti_a + kateetti_b * kateetti_b);

	cout << "Hypotenuusan pituus: " << hypotenuusa << endl;
};

void jakojaannos() 
{
	int luku1;
	int jaollinen = 2;
	
	cout << "Anna kokonaisluku: ";
	cin >> luku1;
	
	if (luku1 % jaollinen != 0)
	{
		cout << "Luku " << luku1 << " on pariton.";
 	}
	else 
	{
		cout << "Luku " << luku1 << " on parillinen.";
	}
	
};

void sokerinkulutus()
{
	int sokeri;
	char valinta;

	cout << "Juotko kahvia vai teetä? (k/t) ";
	cin >> valinta;
	
	cout << "Montako palaa sokeria? ";
	cin >> sokeri;

	if (valinta == 'k')
	{
		if (sokeri >= 0 && sokeri <= 2)
		{
			cout << "Kahvi kyllä piristää!";
		
		}
		else if (sokeri >= 3)
		{
			cout << "Kahvi voi olla aika vahva maku...";	
		}
		else 
		{
			cout << "Ohjelmassa tapahtunut virhe!";
		}
			
	}
	else if (valinta == 't')
	{
		if (sokeri >= 0 && sokeri <= 2)
		{
			cout << "Tee usein rauhoittaa!";
		}
		else if (sokeri >= 3)
		{
			cout << "Taidat pitää teestäsi makeana?";
		}
		else
		{
			cout << "Ohjelmassa tapahtunut virhe!";
		}

	}
	
};

void parempilaskin()

{
	int valinta, luku_1, luku_2;
	double tulos;

	cout << "Käytössäsi on seuraavat laskutoimitukset: " << endl;
	cout << "1: vähennyslasku" << endl;
	cout << "2: yhteenlasku" << endl;
	cout << "3: kertolasku" << endl;
	cout << "4: osamäärä" << endl;
	cout << "5: jakojäännös" << endl;

	cout << "Valitse laskutoimitus: ";	cin >> valinta;

	switch (valinta)
	{
		case 1:  //vähennyslasku
		{
			cout << "Anna eka luku: "; 
			cin >> luku_1;
			cout << "Anna toinen luku: ";
			cin >> luku_2;
			tulos = luku_1-luku_2;
			cout << luku_1 << "-" << luku_2 << " = " << tulos;
			break;
		}
		case 2: //yhteenlasku
		{
			cout << "Anna eka luku: ";
			cin >> luku_1;
			cout << "Anna toinen luku: ";
			cin >> luku_2;
			tulos = luku_1+luku_2;
			cout << luku_1 << "+" << luku_2 << " = " << tulos;
			break;
		}
		case 3:  //kertolasku
		{
			cout << "Anna eka luku: ";
			cin >> luku_1;
			cout << "Anna toinen luku: ";
			cin >> luku_2;
			tulos = luku_1*luku_2;
			cout << luku_1 << "*" << luku_2 << " = " << tulos;
			break;
		}
		case 4:  //osamäärä
		{
			cout << "Anna eka luku: ";
			cin >> luku_1;
			cout << "Anna toinen luku: ";
			cin >> luku_2;
			tulos = luku_1/luku_2;
			cout << luku_1 << "/" << luku_2 << " = " << tulos;
			break;
		}
		case 5:  //jakojäännös
		{
			cout << "Anna eka luku: ";
			cin >> luku_1;
			cout << "Anna toinen luku: ";
			cin >> luku_2;
			tulos = luku_1%luku_2;
			cout << luku_1 << "%" << luku_2 << " = " << tulos;
			break;
		}
		default:
		{
			cout << "Virheellinen valinta."; break;
		}

	}
} 

void silmukka()
{	
	int rajoitin;
	cout << "Anna kokonaisluku: ";
	cin >> rajoitin;
	for (int i = 0; i < rajoitin; i++)
	{
		cout << i+1 << endl;
	}
}

void silmukka_2()
{
	int kertoja;
	int tulos = 1;

	cout << "Anna kokonaisluku: "; cin >> kertoja;
	
	for (int i = 1; i <= kertoja; i++)
	{	
		tulos = tulos * i;
	}
	cout << "Luvun " << kertoja << " kertoma on " << tulos;
}