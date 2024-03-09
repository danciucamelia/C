/*Scrieţi un program care citeşte de la consolă n numere întregi pe care le scrie într-un fişier text cu numele 
citit de la tastatură. Citiţi apoi numerele din fişier, determinaţi media lor aritmetică, pe care o adăugaţi la sfârşitul 
fişierului şi o afişaţi şi pe ecran.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int main(void)
{
	int s=0,n,*x;
	
	printf("\nIntroduceti n:");
	scanf_s("%d", &n);
	x = (int*)malloc(n * sizeof(int*));
	for (int i = 0; i < n; i++)
	{
		printf("\nIntroduceti un numar:");
		scanf_s("%d", &x[i]); s += x[i];
	}
	FILE* f;
	f = fopen("test.txt", "w+");
	f = fopen("test.txt", "a+");
	fprintf(f, "\nNumerele introduse sunt:");
	for (int i = 0; i < n; i++)
	{
		
		fprintf(f, "%d\t", x[i]);
	}
	fprintf(f, "\nMedia numerelor este: %.3f",(s*1.0)/n);


	fclose(f);
	printf("\nMedia numerelor introduse este: %.3f", (s * 1.0) / n);

	return 0;
}