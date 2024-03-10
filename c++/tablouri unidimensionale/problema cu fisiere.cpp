/*Danciu Camelia-Maria, anul 1, grupa 2115, lab 4, pb 8
8. Preluați din două fișiere doua tablouri unidimensionale ce conțin valori reale. Generați un al treilea tablou
care să conțină toate valorile din cele doua tablouri și toate valorile obținute prin medierea valorilor de pe aceeași
poziție din cele doua tablouri inițiale. Dacă numărul de elemente ale tablourilor diferă, media se va face considerând
valoarea 0.0 pentru elementele lipsă. Ordonați al treilea tablou și numărați câte valori neunice sunt în șir.*/
#include<iostream>
#include<fstream>
using namespace std;

ifstream f1("fisier1.txt");
ifstream f2("fisier2.txt");
ofstream fout("rezultat.txt");
int main()
{
	f1.open("fisier1.txt");
	f2.open("fisier2.txt");
	float tab1[20], tab2[20];
	int m = 0,n=0;
	while(f1>>tab1[m])
	{
		m++;
	}
	while (f2>>tab1[n])
	{
		n++;
	}
	cout << "\nPrimul fisier are elementele:";
	for (int i = 0; i < m; i++)
	{
		cout << "\t" << tab1[i];
	}
	cout << "\nAl doilea fisier are elementele:";
	for (int i = 0; i < n; i++)
	{
		cout << "\t" << tab2[i];
	}
	f1.close();
	f2.close();
	return 0;
}
