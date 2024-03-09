/*Danciu Camelia-Maria,anul1,grupa 2115, lab 12, pb2
Sa se scrie un program C/C++, in care folosind cate o functie, se transfera ca parametru o variabila de tip structura de date
prin valoare si respectiv prin adresa, folosind pointeri. In functia main( ) initializati campurile structurii cu date citite de
la tastatura. In ambele functii afisati datele din structura folosind un mesaj adecvat.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

struct Student {
	char oras[20];
	int varsta[2];
};
void citire(struct Student *);
void afisarePointer(struct Student *);
void afisare(struct Student p);

int main()
{
	struct Student d, *p;
	p = &d;

	citire(p);
	

	printf("\nAfisarea folosind o functie:");
	{
		afisarePointer(p);
	}
	printf("\nAfisarea datelor prin adresa este:");
	{
		afisareAdresa(d);
	}

	return 0;
}

void citire(struct Student* p)
{
	printf("\nIntroduceti orasul:");
	scanf_s("%s", p->oras);

	printf("\nIntroduceti orasul:");
	scanf_s("%d", p->varsta);
}

void afisare(struct Student p)
{
	printf("\nOrasul este: %s", p.oras);
	printf("\nVarsta este: %d", p.varsta);
}
void afisarePointer(struct Student* p)
{
	printf("\nOrasul este: %s", p->oras);
	printf("\nVarsta este: %d", p->varsta);
}