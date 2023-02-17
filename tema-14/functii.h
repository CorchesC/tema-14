#pragma once
#include <iostream>
#include <fstream>
using namespace std;

void citire(int v[], int& dim) {

	ifstream f("numere.txt");

	f >> dim;
	for (int i = 0; i < dim; i++) {

		f >> v[i];
	}

	f.close();
}
void citire2(int v[], int& dim) {

	ifstream f("numere2.txt");

	f >> dim;
	for (int i = 0; i < dim; i++) {

		f >> v[i];
	}

	f.close();
}
void afisare(int v[], int dim) {
	for (int i = 0; i < dim; i++) {
		cout << v[i] << " ";
	}
	cout << endl;

}
int nrMinimSecventeStrictCrescatoare(int v[], int dim) {
	int ctr = 0;
	for (int i = 0; i < dim; i++) {
		if (v[i] < v[i + 1]) {
			ctr++;
		}
	}
	return ctr;
}
void secventeEgaleCuSumaAfisare(int v[], int dim,int s) {
	int stg = 0;
	int dr = 0;
	for (int i = 0; i < dim; i++) {
		for (int j = i; j < dim; j++) {
			int sum = 0;
			for (int z = i; z < j; z++) {
				sum += v[z];
			}
			if (sum == s) {
				stg = i; dr = j;
			}
		}
		for (int f = 0; f < dim; f++) {
			if (f >= stg && f < dr) {
				cout << v[f] << " ";
			}
		}
		cout << endl;
	}
	
}
void secventaSumaDivizibilaCuX(int v[], int dim, int x) {
	int stg = 0;
	int dr = 1;
	for (int i = 0; i < dim; i++) {
		for (int j = i; j < dim; j++) {
			int sum = 0;
			for (int z = i; z < j; z++) {
				sum += v[z];
			}
			if (sum != 0 && sum % x == 0) {
				stg = i; dr = j;
			}
		}
	}
	for (int f = 0; f < dim; f++) {
		if (f >= stg && f < dr) {
			cout << v[f] << " ";
		}
	}
	cout << endl;
}
void bubbleSort(int v[], int dim) {
	bool aff = true;
	do {
		aff = true;
		for (int j = 0; j < dim - 1; j++) {
			if (v[j] > v[j + 1]) {
				int aux = v[j];
				v[j] = v[j + 1];
				v[j + 1] = aux;
				aff = false;
			}
		}
	} while (aff == false);

}
void interclasarePare(int v[], int dim, int x[], int dim2, int inter[], int& d) {
	d = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	bubbleSort(v, dim);
	bubbleSort(x, dim2);
	if (v[i] % 2 == 0 && v[j] % 2 != 0) {
		while (i < dim && j < dim2) {
			if (v[i] == x[j]) {

				inter[k] = v[i];
				i++;
				k++;
				j++;
			}
			if (v[i] < x[j]) {

				inter[k] = v[i];
				i++;
				k++;
			}
			if (v[i] > x[j]) {
				inter[k] = x[j];
				j++;
				k++;
			}
		}
		while (i < dim) {

			inter[k] = v[i];
			k++;

		}
		while (j < dim2) {

			inter[k] = x[j];
			k++;

		}
		d = k;
	}
	else if (v[i] % 2 != 0 && v[j] % 2 == 0) {
		i++;
	}
	else if (v[i] % 2 == 0 && v[j] % 2 != 0) {
		j++;
	}
}  