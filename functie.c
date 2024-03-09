//Danciu Camelia-Maria,anul 1, grupa 2115, laboratorul 5, problema 4
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float functie(int m, int n);

int main()
{
	int a, b;  //declaram numerele intregi a si b
	float x;   //declaram numarul x, numar real
	printf("\Introduceti valoarea lui a:");  //dialog cu utilizatorul
	scanf("%d", &a);  //introducem valoarea lui a
	printf("\Introduceti valoarea lui b:");  //dialog cu utilizatorul
	scanf("%d", &b);   //introducem valoarea lui b
	if (a != 0)   //daca a este diferit de 0,efectuam urmatoarele:
	{
		x = functie(a, b);  //apelam functia care ne da solutia ecuatiei
		printf("\nSolutia ecuatiei %dx+%d este: %.2f", a, b, x); // afisam solutia ecuatiei
	}
	else printf("\nEcuatia nu are solutii.");   //daca a=0, atunci se afiseaza mesajul anterior mentionat


	return 0;
}

float functie(int m, int n)  //functia de calculare a solutiei ecuatiei
{
	return -n*1.0/m*1.0;  //functia returneaza valoarea lui x din ecuatia m*x+n=0  (x=-n/m)
}
