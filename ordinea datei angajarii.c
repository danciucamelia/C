/*Danciu Camelia-Maria, anul1 ,grupa 2115, lab 12, pb 5
Folosind structura de la exemplul precedent , să se scrie un program care citeşte datele personale pentru n persoane
(nume, prenume, data naşterii, codul numeric personal, data angajării) şi apoi le afişează în ordinea datei angajării.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 50

struct date_pers {
	char nume[20], prenume[20], CNP[11];
	int zi, luna, an;
	//struct data d;
};

void citire(struct date_pers* p);
void afisare(struct date_pers* p);
void ordonare(struct date_pers* p, int n);
int main(void)
{
	struct date_pers* d, p[max];
	int n;
	do {
		printf("\nIntroduceti numarul de persoane:");
		scanf("%d", &n);
	} while (!(n > 0 && n < 50));
	d = (struct date_pers*)malloc(n * sizeof(struct date_pers*));

	printf("\nIntroduceti datele despre angajati:");
	for (int i = 0; i < n; i++)
	{
		printf("\n\tAngajatul %d:", i + 1);
		citire(p + i);
	}

	
		ordonare(p, n);
		

	printf("\nOrdinea angajarilor este:");
	for (int i = 0; i < n; i++)
	{
		afisare(p + i);
	}

	return 0;
}
void citire(struct date_pers* p)
{

	printf("\nNumele:");
	scanf("%s", p->nume);
	printf("\nPrenumele:");
	scanf("%s", p->prenume);
	printf("\nCNP:");
	scanf("%s", p->CNP);

	printf("\n\tData angajarii:");
	printf("\n\t\tZiua:");
	scanf("%d", &p->zi);
	printf("\n\t\tLuna:");
	scanf("%d", &p->luna);
	printf("\n\t\tAnul:");
	scanf("%d", &p->an);

}

void afisare(struct date_pers* p)
{

	printf("\nNumele: %s", p->nume);
	printf("\nPrenumele: %s", p->prenume);
	printf("\nCNP: %s", p->CNP);
	printf("\n\tData angajarii:%d/%d/%d", p->zi, p->luna, p->an);


}
