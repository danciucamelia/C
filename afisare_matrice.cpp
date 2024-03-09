#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;

int main() {
int i, j, m, n, ** tab;
cout << "\n Introduceti numarul de linii: ";
cin >> m;
if ((tab = new int* [m]))
{
	cout << "\n Introduceti numarul de coloane: ";
	cin >> n;
	for (i = 0; i < m; i++)
	{
		tab[i] = new int[n];
		if (tab[i] == 0)
		{
			cout << "\n Eroare de alocare !";
			return 1;
		}
	}
	cout << "\n Introduceti elementele tabloului:";
	for (i = 0; i < m; i++)
	{
		cout << "\n\t Linia " << i << ":\n";
		for (j = 0; j < n; j++)
		{
			cout << "\t Elementul tab[" << i << "][" << j << "]: ";
			cin >> tab[i][j];
		}
	}
	cout << "\n\n Elementele tabloului sunt: \n";
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			cout << "\t" << tab[i][j];
		cout << "\n";
	}
}
else
cout << "Alocare nereusita !";
if (tab)
{
	for (i = 0; i < m; i++)
		delete[]tab[i];
	delete[]tab;
}
}
