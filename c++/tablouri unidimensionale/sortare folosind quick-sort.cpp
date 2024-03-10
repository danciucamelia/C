/*Danciu Camelia-Maria, anul 1, grupa 2115, lab4, pb 2
2. Modificaţi programul care exemplifică metoda de sortare rapidă explicita (Quick-Sort) aşa încât să ordoneze şirul
iniţial în ordine descrescătoare.*/

#include<iostream>
using namespace std;
void quickSort(int* p, int prim, int ultim);
int main()
{
	int x[20], n;
	cout << "\nIntroduceti numarul de elemente(n<20):"; cin >> n;
	cout << "\nIntroduceti numerele:";
	for (int i = 0; i < n; i++)
	{
		cout << "\nx[" << i << "]="; cin >> x[i];
	}
	quickSort(x, 0, n - 1);
	cout << "\nSirul sortat este:";
	for (int i = 0; i < n; i++)
	{
		cout << x[i] << "\t";
	}
	return 0;
}
void quickSort(int* p, int prim, int ultim) {
	int i, j, pivot, temp;
	i = prim;
	j = ultim;
	pivot = p[ultim];

	do {
		while (p[i] > pivot)
			i++;
		while (p[j] < pivot)
			j--;
		if (i < j) {
			temp = p[i];
			p[i] = p[j];
			p[j] = temp;
		}
		if (i <= j) {
			j--;
			i++;
		}
	} while (i < j);

	if (prim < j)
		quickSort(p, prim, j);
	if (i < ultim)
		quickSort(p, i, ultim);
}
