/*Danciu Camelia-Maria, anul 1, grupa 2115, lab 1, pb 4
Considera?i o func?ie cu 3 parametrii to?i implici?i (int, float, double) care returneaz? produsul acestor valori.
Apela?i func?ia consider�nd mai multe variante de apel concrete (f?r? parametri, 1 parametru, 2 parametri, 3 parametri).*/

#include<iostream>
using namespace std;
double produs(int a, float b, double c);

int main()
{
	int a;
	float b;
	double c;
	produs;
	cout << "\nProdusul celor 3 numere este:" << produs(a, b, c);

	return 0;
}

double produs(int a, float b, double c)
{
	return a * b * c;
}
