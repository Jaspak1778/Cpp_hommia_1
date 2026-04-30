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
	int luku1 = 7;
	int luku2 = 3;
	int luku3 = 0;
	luku3 = luku1 % luku2;

	cout << "Luku on: " << luku3 << endl;
};