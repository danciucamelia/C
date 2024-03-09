/*Danciu Camelia-Maria, anul1 ,grupa 2115, lab 12, pb 4
Să se scrie o aplicaţie C/C++, care utilizând o structură de tip Angajat, să afişeze toate datele persoanelor cu ocupaţia 
inginer dintr-o întreprindere (nume, prenume, ocupaţia, data naşterii, secţia în care lucrează).*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 50

struct date_pers {
	char nume[20], prenume[20], ocupatia[10],sectia[10];
	int zi, luna, an;
	//struct data d;
};

void citire(struct date_pers* p);
void afisare(struct date_pers* p);

int main(void)
{
	struct date_pers* d,p[max];
	int n;
	do {
		printf("\nIntroduceti numarul de angajati:");
		scanf("%d", &n);
	} while (!(n > 0 && n < 50));
	d = (struct date_pers*)malloc(n * sizeof(struct date_pers*));
	
	printf("\nIntroduceti datele despre angajati:");
	for (int i = 0; i < n; i++)
	{printf("\n\tAngajatul %d:",i+1);
		citire(p+i); 
	}

	ordonare(p,n);
	
	printf("\nAngajatii ingineri sunt:");
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
	printf("\nOcupatia:");
	scanf("%s", p->ocupatia);
	printf("\nSectia:");
	scanf("%s", p->sectia);
	
	printf("\n\tData angajarii:");
	printf("\n\t\tZiua:");
	scanf("%d",&p->zi);
	printf("\n\t\tLuna:");
	scanf("%d",&p->luna);
	printf("\n\t\tAnul:");
	scanf("%d",&p->an);

}

void afisare(struct date_pers* p)
{
	if(strcmp(p->ocupatia,"inginer")==0)
	{
		printf("\nNumele: %s", p->nume);
		printf("\nPrenumele: %s", p->prenume);
		printf("\nOcupatia: %s", p->ocupatia);
		printf("\nSectia: %s", p->sectia);
		printf("\n\tData angajarii:%d/%d/%d", p->zi, p->luna, p->an);
	}

}