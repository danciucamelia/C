/*Danciu Camelia-Maria, anul1 ,grupa 2115, lab 13, pb 10
Să se scrie o aplicaţie care:
- defineşte o structură numită Student, cu câmpurile numele, prenumele, grupa, media;
- citeşte de la consolă un număr întreg n (numărul studentilor)
- pentru fiecare înregistrare de tip Student, citeşte cu o funcţie datele aferente şi le scrie într-un fişier,
cu numele preluat de la consolă;
- citeşte conţinutul fişierului şi afişează studenţii ce au media mai mare decât o valoare citită de la consolă.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define max 30
struct student {
	char nume[20], prenume[20];
	int grupa;
	float media;
};
void citire(struct student* s);
void afisare(struct student* s);
int main(void)
{
	struct student* s,tab[max];
	int n,nr;
	printf("\nIntroduceti numarul de studenti:");
	scanf_s("%d", &n);
	s = (struct student*)malloc(n * sizeof(struct student*));
	printf("\nIntroduceti o valoare pentru medie:");
	scanf("%d", &nr);
	for(int i=0;i<n;i++)
	citire(tab+i);
	for (int i = 0; i < n; i++)
	{
		if ((tab+ i)->media > nr)
			afisare(tab+i);
	}

	return 0;

}

void citire(struct student* s)
{
	FILE* f;
	f = fopen("student.txt", "w+");

	printf("\nNumele:");
	fputs(s->nume, f);
	printf("\nPrenumele:");
	fputs(s->prenume, f);
	printf("\nGrupa:");
	fprintf(f, "%d", s->grupa);
	printf("\nMedia:");
	fprintf(f, "%.3f", s->media);
	fclose(f);
}
void afisare(struct student* s)
{
	FILE* f;
	f = fopen("student.txt", "r");

	printf("\nNumele: %s",s->nume);
	printf("\nPrenumele:%s",s->prenume);
	printf("\nGrupa:%d",s->grupa);
	printf("\nMedia: %.3f",s->media);
	fclose(f);
}
