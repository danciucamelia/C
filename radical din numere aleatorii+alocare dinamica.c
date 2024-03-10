/*Danciu Camelia-Maria, anul 1, grupa 2115, lab 11, pb 8
Sa se scrie o aplicatie C/C++ in care se aloca dinamic memorie pentru n numere intregi, numere ce vor fi citite de la tastatura.
Sa se scrie functia care extrage radicalul din fiecare numar si stocheaza valorile obtinute intr-un alt tablou alocat dinamic.
Sa se afiseze numerele initiale si valorile din tabloul format. Eliberati la sfarsit memoria alocata.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
void radical(int* tab, int n);
int main()
{
        int *tab, n, i;
        printf("\nIntroduceti numarul de elemente:");
        scanf_s("%d",&n);
        tab = new int[n];
        if (tab != 0)
        {
                //tab[i] = new int*;
                printf("\nIntroduceti elementele tabloului:");
                for (i = 0; i < n; i++)
                {
                        printf("\nIntroduceti un numar:");
                scanf_s("%d",&tab[i]);
        }

                printf("\nNumerele introduse sunt:\n");
                for (i = 0; i < n; i++)
                        printf("%d\t",tab[i]);

        }
        else printf("\nAlocare gresita!");

        radical(tab,n);

        if (tab) delete []tab;

        return 0;
}
void radical(int* tab, int n)
{
    float *tab1;
        tab1 = new float[n];
        if (tab1 != 0)
        {
                for (int i = 0; i < n; i++)
                {
                        *(tab1 + i) = sqrt(*(tab + i));
                }
                printf("\nElementele celui de-al doilea tablou sunt:\n");
                for (int i = 0; i < n; i++)
                        printf("%.2f\t", tab1[i]);
        }
        else printf("\nAlocare nereusita!");
}


