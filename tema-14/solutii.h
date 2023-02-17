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
void sol3() {
	//(40) 40. Fie un tablou unidimensional cu n elemente valori naturale. Să se determine o submulțime de elemente din tabloul citit, pentru care suma elementelor este divizibilă cu n.
	int v[100], d = 0;
	citire(v, d);
	cout << "Introduecti x: " << endl;
	int x;
	cin >> x;
	secventaSumaDivizibilaCuX(v, d, x);
}
void sol4() {
	//(41) Se consideră doi vectori de lungime n respectiv m ce conține elemente naturale ordonate crescător.Se cere interclasarea valorilor pare din cei doi vectori.În urma interclasării elementele vor fi plasate într - un nou vector.
	int v[100], d = 0;
	citire(v, d);
	int n[100], k = 0;
	citire2(v, d);
	int i[100], d2 = 0;
	interclasarePare(v, d, n, k, i, d2);
	afisare(i, d2);
}
void sol5() {
	//(45)  Se citesc de la tastatură valorile din doi vectori. Primul conține n elemente în ordine crescătoare, iar al doilea m elemente în ordine descrescătoare.Să se realizeze un program care interclasează doar elementele impare din cei doi vectori ci afisează ne ecran şirul obținut.
	int v[100], d = 0;
	citire(v, d);
	int n[100], k = 0;
	citire2(v, d);
	int i[100], d2 = 0;
	interclasareSol5(v, d, n, k, i, d2);
	afisare(i, d2);
}
void sol6() {
	//(46)  Se citeşte de la tastatură n elemente ale unui vector. Să se realizeze un program care şterge elementele situate între prima apariție a unui element cub perfect şi ultima apariție a unui element cub perfect.
	int v[100], d = 0;
	citire(v, d);
	stergereprimulSiUltimulElementCubPerfect(v, d);
	afisare(v, d);
}