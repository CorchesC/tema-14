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