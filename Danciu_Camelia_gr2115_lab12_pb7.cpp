/*Danciu Camelia-Maria,anul 1, grupa 2115,k lab 12, pb 7
Să se scrie o aplicaţie C/C++, care alocă dinamic memorie pentru datele a n studenţi, (nume, prenume si gen),
citeşte datele pentru fiecare din aceştia, afişează numărul studentelor si elibereaza memoria alocată.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct date {
	char nume[20], prenume[20], gen[10];
};

void citire(struct date* p);

int main(void)
{
	struct date* p;
	int i,n,nf=0;
	printf("\nIntroduceti numarul studentilor:");
	scanf("%d", &n);
	p = (struct date*)malloc(n * sizeof(struct date));
	for (i = 0; i < n; i++)
	{
		citire(p+i);
	}
	

	for (i = 0; i < n; i++)
	{
		if (strcmp((p + i)->gen, "feminin") == 0)
			nf++;

	}

	printf("\nNumarul de studente este: %d", nf);

	if (p) free(p);

	return 0;
}
void citire(struct date *p)
{
	printf("\nNume:");
	scanf("%s", p->nume);
	printf("\nPrenume:");
	scanf("%s", p->prenume);
	printf("\ngen:");
	scanf("%s", p->gen);
}
