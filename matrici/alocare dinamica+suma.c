/*Danciu Camelia-Maria, anul 1, grupa 2115, lab 11, pb 3*/
//Sa se scrie o aplicatie C/C++, care aloca dinamic memorie pentru stocarea elementelor a doua matrici de "m" linii si "n"
//coloane. Sa se scrie o functie care calculeaza suma celor doua matrici si o functie pentru afisarea unei matrici. Sa se afiseze
//matricile initiale si matricea obtinuta.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

#define dim 20

void citire(int* p, int m, int n);
void afisare(int* P, int m, int n);
int* suma(int* a, int*b, int* s, int m, int n);

int main()
{
        int matrice1[dim][dim], matrice2[dim][dim], sm[dim][dim], m, n, * a, * b, * s;
        a = &matrice1[0][0];
        b = &matrice2[0][0];                        
        s = &sm[0][0];

        printf("Introduceti numarul de linii:"); scanf("%d", &m);    

        printf("Introduceti numarul de coloane:"); scanf("%d", &n);

        if (!(a = (int*)malloc(m * n * sizeof(int))) || !(b = (int*)malloc(m * n * sizeof(int))))
        {
                printf("Alocare nereusita");
                return 0;
        }

        printf("Introduceti valorile primei matrice:\n");
        citire(a, m, n);

        printf("Introduceti valorile celei de a doua matrice:\n");
        citire(b, m, n);

        printf("Prima matrice este:\n");
        afisare(a, m, n);

        printf("A doua matrice este:\n");
        afisare(b, m, n);

        ps = suma(a, b, s, m, n);
        printf("Suma celor doua este:\n");

        afisare(s, m, n);
        if (a)
                free(a);
        if (b)
                free(b);
        return 0;
}

void citire(int* p, int m, int n)
{
        int i, j;
        for (i = 0; i < m; i++)
                for (j = 0; j < n; j++)
                {
                        printf("\tA[%d][%d] = ", i + 1, j + 1);
                        scanf("%d", p + i * m + j);
                }
}

void afisare(int* p, int m, int n)
{
        for (int i = 0; i < m; i++)
        {
                for (int j = 0; j < n; j++)
                        printf("%d", *(p + i * m + j));
                printf("\n");
        }
}

int* suma(int* a, int* b, int* s, int m, int n)
{
        for (int i = 0; i < m; i++)
                for (int j = 0; j < n; j++)
                        *(s + i * m + j) = *(a + i * m + j) + *(b + i * m + j);
        return s;
