/*Să se scrie o aplicaţie C/C++ care citeşte un fişier text linie cu linie şi îl afişează pe ecran.
Se va folosi un fisier existent din sistem sau se va genera in prealabil unul prin program.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char s;
	FILE* f;
	f = fopen("element.txt", "r");
	do
	{
		printf("\n%s", s);

	} while (fscanf(f, "%s", &f) == EOF);



	return 0;
}