#pragma once
#include "functii.h"
using namespace std;

void sol1() {
	//(38) Se consideră un tablou unidimensional cu n(<100) elemente naturale. Să se determine numărul minim de subşiruri strict crescătoare de valori consecutive în care poate fi partiționat vectorul.Prin subşir se întelege o secvență de elemente din vectorul inițial ce nu se află neapărat pe poziții consecutive.
	int v[100], d = 0;
	citire(v, d);
	int ctr = nrMinimSecventeStrictCrescatoare(v, d);
	cout << "Numarul minim de secvente crescatoare este: " << ctr << endl;
}
void sol2() {
	//(39) Se consideră un tablou unidimensional cu n(<100) elemente întregi. Să se determine toate secvențele de elemente de pe poziții consecutive, care au suma egală cu S.Fiecare secvență de elemente va fi afişată pe câte o linie pe ieşirea standard.
	int v[100], d = 0;
	citire(v, d);
	cout << "Introduecti suma: " << endl;
	int s;
	cin >> s;
	secventeEgaleCuSumaAfisare(v, d,s); ////?
}