/*Danciu Camelia-Maria, anul 1, lab 13,pb 5
Să se scrie o aplicaţie C/C++ care citeşte un fişier text linie cu linie şi îl afişează pe ecran.
Se va folosi un fisier existent din sistem sau se va genera in prealabil unul prin program.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char *s[100];
	FILE* f;
	f = fopen("element.txt", "r");
	for (int i = 0; i < 100; i++)
	{
		*s[i] = fscanf(f, "%c",s+i);
		printf("%c",*(s+i));

	}

	fclose(f);

	return 0;
}