/*Danciu Camelia-Maria, anul 1,grupa 2115, lab 11, pb 7
Sa se scrie o aplicatie C/C++ care aloca dinamic memorie necesara pentru stocarea a 10.000 de numere intregi.
Programul initializeaza numerele cu valori aleatoare intre 1 si 100 (folositi functiile srand() si/sau rand() in VC++).
Scrieti o functie care afiseaza cele mai frecvente 10 numere si numarul lor de aparitii in tabloul initial.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int frecvente(long int* tab1);
int main()
{
        long int* tab;
        int i;
        tab = new long int[10000];
        if (tab != 0)
        {
                for (i = 0; i < 10000; i++)
                {
                        *(tab + i) = rand() % 99 + 1;
                        //printf("%d\t", *(tab + i));
                }
        }
        frecvente(tab);
        delete[]tab;
        return 0;
}
int frecvente(long int* tab1)
{
        int k[10000] = { 0 }, n = 10000, man, i, j;

        //printf("\nTabloul contor este:\t");
        //for (int i = 0; i < 10; i++)
        //        printf("%d\t", k[i]);
        for (int i = 0; i < 10000; i++)
        {
                for (j = 0; j < 10000; j++)
                        if (*(tab1 + i) == *(tab1 + j))  k[i]++;
        }


        for (i = 0; i < 10000; i++)
        {
                for (int j = i; j < 10000; j++)
                        if (k[i] < k[j]) { man = k[i]; k[i] = k[j]; k[j] = man; }

        }
        printf("\nCele mai frecvente 10 numere sunt:\n");
        for (int i = 0; i < 10; i++)
        {
                if (k[i] > 0) printf("%d apare de %d ori.\n", tab1[i], k[i]);
        }
        return 0;
}
