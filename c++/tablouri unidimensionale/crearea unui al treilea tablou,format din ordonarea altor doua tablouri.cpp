/*Danciu Camelia-Maria, anul 1, grupa 2115, lab 4, pb 4
Scrieţi o aplicaţie C/C++ in care plecând de la două tablouri (unidimensionale) de numere naturale să se
obţină un al treilea tablou care să conţină toate elementele tablourilor sursă fără a se repeta, aranjate în ordine crescătoare.*/
#include<iostream>
using namespace std;
void citire(int tab[], int n);
void afisare(int tab[], int n);
void sortBubble(int* p, int n);
void egalare(int a[], int b[], int c[], int n);
void eliminare(int tab[], int n);
int main()
{
	int tab1[20], tab2[20],tab3[40];
	int n;
	cout << "\nIntroduceti dimensiunea tablourilor:"; cin >> n;
	while (n < 0 || n>20)
	{
		cout << "\nIntroduceti din nou dimensiunea tablourilor:"; cin >> n;
	}
	citire(tab1, n);
	citire(tab2, n);

	cout << "\nPrimul tablou este:";
	afisare(tab1, n);
	cout << "\nAl doilea tablou este:";
	afisare(tab2, n);
	
	int N = 2 * n;

	egalare(tab1, tab2, tab3,n);
	sortBubble(tab3, N);
	
	cout << "\nAl treilea tablou sortat este:";
	eliminare(tab3, N);

	

	return 0;
}
void citire(int tab[],int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\ntab[" << i << "]="; cin >> tab[i];
	}
}
void afisare(int tab[], int n)
{
	
	for (int i = 0; i < n; i++)
	{
	  	cout << "\t" << tab[i];
	}
	
}
void egalare(int a[], int b[], int c[], int n)
{
	int k = 0,l=0,N=2*n;

		for (int j = 0; j <N; j++)
		{
			
			if (j < n) { c[j] = a[k]; k++; }
			if (j >= n) { c[j] = b[l]; l++; }

		}	
		
}
void sortBubble(int* p, int n)
{
	int i, j, temp;
	for (i = 1; i < n; i++) {
		for (j = n - 1; j >= i; j--) {
			if (p[j - 1] > p[j]) {
				temp = p[j];
				p[j] = p[j - 1];
				p[j - 1] = temp;
			}
		}
	}
}
void eliminare(int tab[], int n)
{
	for (int i = 0; i < n; i++)
		if (tab[i]== tab[i+1]) {
			for (int j = i+1; j < n; j++)
				tab[j] = tab[j + 1];
			n--;
		}
	for (int i = 0; i < n; i++)
	{
		cout << "\t" << tab[i];
	}
	
}
