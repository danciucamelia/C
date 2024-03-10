/*Danciu Camelia-Maria,anul1, grupa 2115, lab 4, pb 10
10. Generati printr-un mecanism aleatoriu un tablou de maxim 200 de valori reale (prin doua tablouri de aceiaşi dimensiune,
primul fiind partea intreaga (nu mai mare de 100), al doilea partea fractionara (limitata la 20 ca intreg ce devine .20 fractionar),
tabloul real fiind obtinut prin combinarea partii intregi şi fractionare. Afişati tablourile generate, cel real obtinut.
Sortati folosind functia qsort( ) tabloul real si afisati rezultatul obtinut.*/
#include<iostream>
using namespace std;
void generare(int a[], int b[], int n);
void afisare(int a[], int n);
int cmp(const void* a, const void* b);
int main()
{
	float tab[200];
	int n, tab1[100], tab2[100];
	cout << "\nIntroduceti numarul de elemente ale tabloului:"; cin >> n;

	generare(tab1, tab2, n);
	cout << "\nPrimul tablou generat este:";
	afisare(tab1, n);
	cout << "\nAl doilea tablou generat este:";
	afisare(tab2, n);
	for (int i = 0; i < n; i++)
	{
		tab[i] = tab1[i] + 0.01 * tab2[i];
	}
	cout << "\nTabloul real obtinut este:";
	for (int i = 0; i < n; i++)
	{
		cout << "\t" << tab[i];
	}
	qsort(tab, n, sizeof(float), cmp);
	cout << "\nTabloul sortat este:";
	for (int i = 0; i < n; i++)
	{
		cout << "\t" << tab[i];
	}

	return 0;
}
void generare(int a[],int b[], int n)
{
	int x;
	for(int i=0;i<n;i++)
	{

		a[i] = rand() % 100;
		
	}
	int i = 0;
	while (n)
	{
		x = rand() % 100;
		if (x < 20) { n--; b[i] = x; i++; }
	}

}
void afisare(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\t" << a[i];
	}
}
int cmp(const void* a, const void* b)
{
	return *(int*)a - *(int*)b;
}
