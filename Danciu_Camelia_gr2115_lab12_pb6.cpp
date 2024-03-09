/*Danciu Camelia-Maria, anul1, grupa 2115, lab 12,pb 6
Să se scrie un program care afişează numele, prenumele şi media studentului cu cele mai bune rezultate din grupă în urma
sesiunii de iarnă. Folosiţi pentru aceasta un tablou de structuri, de un tip numit Student, alocarea dinamica, şi o funcţie
care returnează înregistrarea student cu media cea mai mare.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#define max 28


struct student {
	char nume[20], prenume[20];
	float media;
};
void citire(struct student* p);
void afisare(struct student* p);
int main(void)
{
	struct student* d, p[max];
	float m;
	d = &p[0];
	int n;

	do{
	printf("\nIntroduceti numarul de studenti:");
		scanf("%d", &n);
	
	} while (!(n > 0 && n < 28));
	
	d = (struct student*)malloc(n * sizeof(struct student*));

	printf("\nIntroduceti datele studentilor:");
	for (int i = 0; i < n; i++)
	{
		printf("\nStudentul %d:\n", i+1);
		citire(p + i);
	}

	for (int i = 0; i < n; i++)
	for(int j=i;j<n;j++)
	{
			if ((p + i)->media < (p + j)->media)
			{ m=(p+i)->media; (p + i)->media= (p + j)->media; (p + j)->media= m;
			
			strcpy((p + i)->nume, (p + j)->nume);
			strcpy((p + i)->prenume, (p + j)->prenume);

			}
			
			
	}
	for (int i = 0; i < n; i++)
	{
		if ((p + i)->media == (p + 0)->media)
		{
			printf("\n\tDatele studentului cu cea mai mare medie din grupa sunt:\n");
			afisare(p + i);
		}
		 
	}

	if (p) delete(p);
	
	return 0;
}
void citire(struct student* p)
{
	printf("\nNumele:");
	scanf("%s", &p->nume);
	printf("\nPrenumele:");
	scanf("%s",&p->prenume);
	do {
		printf("\nMedia:");
		scanf_s("%f", &p->media);
	} while (p->media<0);

}

void afisare(struct student* p)
{
	printf("\nNumele: %s", p->nume);
	printf("\nPrenumele: %s", p->prenume);
		printf("\nMedia: %2.f", p->media);
	
}