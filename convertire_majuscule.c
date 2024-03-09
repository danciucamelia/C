/*Danciu Camelia-Maria,anul 1,gr 2115, lab 13,pb 5
Scrieţi o aplicaţie C/C++ care citeşte caracter cu caracter un fişier
text şi converteşte primul caracter al fiecărui cuvânt în majusculă.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char s[20], * p;
	p = &s[0];
	FILE* f;

	f = fopen("element.txt", "r");
	while (fgets(s,20,f) !=NULL)
	{
		printf("%s", s);
	}

	return 0;
}
