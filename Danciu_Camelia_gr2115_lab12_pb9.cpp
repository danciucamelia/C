/*Danciu Camelia-Maria,anul 1, lab 12, pb 9
Scrieti o aplicaţie C/C++, care alocă dinamic memorie pentru memorarea datelor a n produse, folosind o 
structură Produs, cu câmpurile denumire, pret, cantitate, citeşte datele pentru fiecare dintre produse si afişează produsul 
din care avem cel mai mult pe stoc. În final va elibera memoria alocată.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 50


struct Produs {
	char denumire[20];
	float pret;
	int cantitate;

};

void citire(struct Produs* p);
void ordonare(struct Produs* p, int n);
void afisareP(struct Produs* p, int n);

int main(void)
{
	struct Produs* d, p[max];
	int n;
	printf("\nIntroduceti numarul de produse(tipuri):");
	scanf_s("%d", &n);

	d = (struct Produs*)malloc(n * sizeof(struct Produs*));
	printf("\nIntroduceti informatiile despre produse:");
	for (int i = 0; i < n; i++)
	{
		printf("\n\tProdusul %d este:",i+1);
		citire(p + i);

	}
	ordonare(p, n);
	afisareP(p, n);

	if (p) 
		delete []p;
	

	return 0;
}
void citire(struct Produs* p)
{
	printf("\n\tIntroduceti denumirea produsului:");
	scanf("%s", p->denumire);
	printf("\n\tIntroduceti pretul produsului:");
	scanf("%f",&p->pret);
	printf("\n\tIntroduceti cantitatea de produs aflata pe stoc:");
	scanf("%d", &p->cantitate);
}
void ordonare(struct Produs* p, int n)
{
	int nr;
	for(int i=0;i<n;i++)
		for (int j = i; j < n; j++)
		{
			if ((p + i)->cantitate < (p + j)->cantitate)
			{
				nr = (p + i)->cantitate;
				(p + i)->cantitate = (p + j)->cantitate;
				(p + j)->cantitate = nr;

				strcpy((p + i)->denumire, (p + j)->denumire);
			}
		}

}
void afisareP(struct Produs *p, int n)
{
	for (int i = 0; i < n; i++)
	{
		if ((p + i)->cantitate == (p + 0)->cantitate) 
		{
			printf("\nProdusul cel mai avut pe stoc este: %s", (p + i)->denumire);
		}
	}
}