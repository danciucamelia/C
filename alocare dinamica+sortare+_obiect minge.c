
/*structura-Minge:
*   -nume[30]
*   -culoare[30]
*   -double diametru
* alocare dinamica-tablou de n mingi(<100 si >x)
* citire+afisare utilizand functii specifice
* sortat descrescator dupa nume si culoare
* sortat crescator dupa diametru
* --afisare rezultate--
* afisare date in fisier binar cu numele dat de la tastatura
* se citesc si se afiseaza datele a primelor 3 mingi
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct Minge {
	char nume[30],culoare[30];
	double diametru;
};

void citire(struct Minge* p);
void afisare(struct Minge* p);
void fisier(struct Minge* p);

int main(void)
{
	struct Minge* p,m[100];
	p = &m[0];
	int n;
	printf("\nIntroduceti numarul de mingi:");
	scanf("%d", &n);
	while (n < 1 || n>100)
	{
		printf("\nIntroduceti din nou numarul de mingi:");
		scanf("%d", &n);
	}
	p = (struct Minge*)malloc(n * sizeof(struct Minge*));

	if(!m) printf("\nalocare nereusita!");
	for(int i=0;i<n;i++)
	{ 
		printf("\nIntroduceti datele mingii nr%d.:",i+1);
		citire(p + i);

	}
	for (int i = 0; i <n; i++)
	{
		printf("\nDatele mingii nr%d.:", i + 1);
		afisare(p + i);

	}
	for (int i = 0; i < n; i++)
	{
		printf("\nDatele mingii nr%d.:", i + 1);
		fisier(p + i);

	}
	
	return 0;
}
void citire(struct Minge* p)
{
	printf("\nIntroduceti numele:");
	scanf("%s", p->nume,30);
	printf("\nIntroduceti culoarea:");
	scanf("%s", p->culoare,30);
	printf("\nIntroduceti diametru mingii:");
	scanf("%lf", &p->diametru);


}
void afisare(struct Minge* p)
{
	printf("\nNumele: %s", p->nume);
	printf("\nCuloarea: %s", p->culoare);
	printf("\nDiametru: %.2lf", p->diametru);

}
void fisier(struct Minge* p)
{
	char s[20];
	printf("\nIntroduceti numele fisierului:");
	scanf("%s", s,20);
	FILE* f;
	f = fopen( s, "w+b");
	fprintf(f, "\nNumele:%s", p->nume);
	fprintf(f, "\nCuloarea:%s", p->culoare);
	fprintf(f, "\nDiametrul:%.2lf", p->diametru);
	fclose(f);
}
void comp(struct Minge* p)
{

}




