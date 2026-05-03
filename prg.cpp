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