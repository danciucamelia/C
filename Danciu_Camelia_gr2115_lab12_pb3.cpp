/*Danciu Camelia-Maria,anul 1, grupa 2115,lab12, pb3
Sa se scrie un program C/C++, in care o functie returneaza o structura de date adecvata. In acest fel vor fi returnate mai multe 
valori. Afisati rezultatul, valorile initiale transferate functiei (puteti realiza orice operatie in cadrul acelei functii), 
cu mesaje adecvate.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

struct obiecte {
	char s1[20];
	char s2[20];
	int comp;

};
void citire(struct obiecte *p);
void comparare(struct obiecte *p);
int main(void)
{
	struct obiecte *p;
	citire(p);
	comparare(p);

	return 0;
}
void citire(struct obiecte *p)
{
	printf("\nIntroduceti un sir de caractere:"); 
	scanf("%s", p.s1);
	printf("\nIntroduceti un alt sir de caractere:");
	scanf("%s", p.s2);
}

void comparare(struct obiecte *p)
{
	if (strcmp(p.s1, p.s2) == 0)
		p.comp = 1;
	else p.comp = -1;
	strncat(p.s1, p.s2, 2);
}
