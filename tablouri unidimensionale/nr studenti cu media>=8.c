/*Danciu Camelia-Maria, anul 1, grupa 2115, laboratorul 10, pb 9
Scrieti un program care citeste de la tastatura elementele de tip float ale unui tablou unidimensional,
elemente ce reprezinta mediile unei grupe de studenti. Sa se scrie o functie care determina numarul 
studentilor cu media >= 8. Afisati rezultatul in main. (lucrati cu pointeri, fara variabile globale).*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int citire(float *v, int nr);
int main()
{
        float x[30];
        int n;
        printf("\nIntroduceti numarul de studenti din grupa(n<=30):");
        scanf("%d", &n);

        printf("\n%d",citire(x, n));
        return 0;
}
int citire(float *v, int nr)
{
        int k = 0;
        
        for (int i = 0; i < nr; i++)
        {
                printf("\nIntroduceti media studentului %d:", i);
                scanf("%f",v+i);
                if (*(v+i) >= 8) k++;
        }
        return k;
}

