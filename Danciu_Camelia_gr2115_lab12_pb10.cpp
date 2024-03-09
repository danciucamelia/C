/*Danciu Camelia-Maria, anul1,grupa 2115,lab 12, pb10
Să se definească o structură cu numele Masina, care are câmpurile producator, anul fabrictiei, capacitatea_cilindrică
și culoare. Să se aloce dinamic memorie pentru n date de tip Maşina şi să se citească informaţiile pentru acestea.
Să se afişeze inregistrarile maşinilor de culoare roşie, fabricate după anul 2010.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 20

struct masina {
	const char producator[20], culoare[10];
	int an_f, capacitate_c;
};

void citire(struct masina* p);
void afisare(struct masina* p);

int main(void)
{
	struct masina* p, dp[MAX]={};
	int n,nr=0;
	p =&dp[0];
	printf("\nintroduceti numarul de masini:");
	scanf_s("%d", &n);
	p = (struct masina*)malloc(n * sizeof(struct masina*));
	for (int i = 0; i < n; i++)
	{
		printf("\nIntroduceti specificatiile masinii %d:", i + 1);
		citire(p + i);
		if (strcmp((p+i)->culoare, "rosie") == 0 && (p+i)->an_f > 2010) nr++;
		
	}

	printf("\nMasinile rosii fabricate dupa anul 2010 sunt:");
	for (int i = 0; i < n; i++)
	{
		afisare(p + i);
	}
	if (nr) printf("\nSunt %d masini cu specificatiile cerute.", nr);
	else printf("\nNu sunt masini cu specificatiile cerute.");

	return 0;
}
void citire(struct masina* p)
{
	printf("\nProducator:");
	scanf("%s",&p->producator);
	printf("\nAn fabricatie:");
	scanf_s("%d",&p->an_f);
	printf("\nCapacitatea cilindrica:");
	scanf_s("%d",&p->capacitate_c);
	printf("\nCuloare:");
	scanf("%s",&p->culoare);
}

void afisare(struct masina* p)
{
	if (strcmp(p->culoare, "rosie") == 0 && p->an_f > 2010)
	{
		printf("\nProducator: %s", p->producator);
		printf("\nAn fabricatie: %d", p->an_f);
		printf("\nCapacitatea cilindrica:%d", p->capacitate_c);
		printf("\nCuloare: %s", p->culoare);
		
	}
	

}