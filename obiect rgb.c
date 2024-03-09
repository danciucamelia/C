#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>


struct Obiect {

	char nume_obiect[20];
	int r, g, b;

};

void citireDate(struct Obiect* p);
void afisareDate(struct Obiect* p);
void salvareFisier(struct Obiect* p);

int main(void)
{
	struct Obiect* p,ob[50];
	p = &ob[0];
	int n;
	do {
		printf("\nIntroduceti numarul de obiecte:");
		scanf_s("%d", &n);
	} while (n < 1 || n>50);
	p = (struct Obiect*)malloc(n * sizeof(struct Obiect*));

	for (int i = 0; i < n; i++)
	{
		printf("\nIntroduceti datele despre obiectul %d:",i+1);
		citireDate(p + i);
	}

	for (int i = 0; i < n; i++)
	{
		printf("\nDatele despre obiectul %d sunt:", i + 1);
		afisareDate(p + i);
	}

	for (int i = 0; i < n; i++)
	{
		//printf("\nDatele despre obiectul %d sunt:", i + 1);
		salvareFisier(p + i);
	}

	if (ob) delete[]ob;
		 
	return 0;
}
void citireDate(struct Obiect* p)
{
	printf("\nIntroduceti numele obiectului:");
	scanf_s("%s", p->nume_obiect,20);
	p->r = rand() % 256;
	p->g = rand() % 256;
	p->b = rand() % 256;

}
void afisareDate(struct Obiect* p)
{
	float m;
	m = (p->r + p->g + p->b) / 3;
	printf("\nDenumirea obiectului este: %s", p->nume_obiect);
	printf("\nMedia culorilor este: %2.f", m);
}
void salvareFisier(struct Obiect* p)
{
	int k;
	printf("\nIntroduceti valoarea lui k:");
	scanf_s("%d",&k);
	FILE* f;
	f = fopen("test.txt", "w+");
	if ((p->r) > k)
	{
		fprintf(f, "\nDenumirea obiectului:%s", p->nume_obiect);
		fprintf(f, "\nCantitatea de rosu: %d", p->r);
		fprintf(f, "\nCantitatea de verde: %d", p->g);
		fprintf(f, "\nCantitatea de albastru: %d", p->b);

	  }
	fclose(f);

}
