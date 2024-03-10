/*Danciu Camelia-Maria,anul1, grupa 2115, lab 4, pb 9
9. Generati in mod aleatoriu un tablou de maxim 200 valori intregi, valori nu mai mari de 100.
Determinati si afisati valoarea minima, mediana si maxima generata, sortand elementele printr-o metoda la alegere.
Determinati valoarea medie si comparati aceasta valoare cu cea mediana (afisati diferenta).
Verificati daca valoarea medie este in tabloul initial generat.*/
#include<iostream>
using namespace std;
void generare(int tab[], int n);
void sortBubble(int* p, int n);
float medie(int tab[], int n);
int main()
{
	int n, tab[200];
	cout << "\nIntroduceti numarul de elemente:";
	cin >> n;
	while (n < 0 || n>200)
	{
		cout << "\nIntroduceti numarul de elemente:";
		cin >> n;
	}
	generare(tab, n);
	sortBubble(tab, n);
	/*cout << "\nTabloul sortat este:\n";
	for (int i = 0; i < n; i++)
	{
		cout << "\t" << tab[i];
	}*/
	cout << "\nValoarea minima generata este:" << tab[0];
	cout << "\nValoarea maxima generata este:" << tab[n-1];
	cout << "\nValoarea mediana generata este:" << tab[(n-1)/2];
	cout << "\nValoarea medie este:" << medie(tab, n);
	cout << "\nDiferenta dintre valoarea medie si cea mediana este:" << medie(tab, n) - tab[(n - 1) / 2];
	for (int i = 0; i < n; i++)
	{
		if (tab[i] == medie(tab, n)) cout << "\nValoarea medie se afla in tabloul generat.";
		break;
	}

	return 0;
}
void generare(int tab[], int n)
{
	for (int i = 0; i < n; i++)
	{
		tab[i] = rand() %100;
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
float medie(int tab[], int n)
{
	float m = 0;
	for (int i = 0; i < n; i++)
	{
		m += tab[i]; 
	}
	return m * 1.0 / n;
}
