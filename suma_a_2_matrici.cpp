/*Danciu Camelia-Maria, anul 1, grupa 2115, lab 11, pb 3
Sa se scrie o aplicatie C/C++, care aloca dinamic memorie pentru stocarea elementelor a doua matrici de "m" linii si "n"
coloane. Sa se scrie o functie care calculeaza suma celor doua matrici si o functie pentru afisarea unei matrici. Sa se afiseze
matricile initiale si matricea obtinuta.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<iostream>
using namespace std;
void citire(int m, int n, int* a,int* b);
void afisare(int* a,int* b, int m, int n);
void suma(int* a, int* b, int m, int n);
int main()
{
	int m, n, *matrice1,*matrice2;

	printf("\nIntroduceti numarul de linii:"); scanf("%d",&m);
	printf("\nIntroduceti numarul de coloane:"); scanf("%d",&n);

	matrice1 = new int[m*n];
	matrice2 = new int[m*n];
	citire(m, n, matrice1, matrice2);
	//citire(m, n, matrice2);
	afisare(matrice1, matrice2,m, n);
	//afisare(matrice2, m, n);
	suma(matrice1, matrice2, m, n);

	return 0;
}
void citire(int m, int n, int* a,int* b)
{
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
		{
			printf("\nA[%d][%d]=",i,j); cin>>(* (a + i + j));
		}

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			printf("\nB[%d][%d]=", i, j); cin>>(* (b + i + j));
		}
	
}
void afisare(int* a,int *b, int m, int n)
{
	

	printf("\nPrima matrice este:\n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)

			printf("%d ",*(a+i+j));
		printf("\n");

	}
	printf("\nCea de-a doua matrice este:\n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)

			printf("%d ",*(b+i+j));
		printf("\n");

	}
}
void suma(int* a, int* b, int m, int n)
{
	
	printf("\nSuma celor doua matrici este:\n");
	for(int i=0;i<m;i++)
	{
		for (int j = 0; j < n; j++)
			printf("%d ",(*(a + i+j))+(*(b + i+j)));

		printf("\n");
	}

}
