/*Danciu Camelia-Maria, anul 1, grupa 2115, laboratorul 8, pb 8
* Scrieti un program care preia de la tastatura "n" valori reale intr-un tablou unidimensional, 
calculeaza cu o functie valoarea medie a valorilor introduse si afiseaza cu o alta functie doar valorile
din tablou mai mari decat valoarea medie calculata.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define dim 100

void citire(float a[dim], int m);
float medie(float a[dim], int m);
void afisare(float a[dim], int m);

int main()
{
        int n;
        float x[dim];
        printf("\nIntroduceti n<100:");
        scanf("%d", &n);

        citire(x, n);
        //medie(x, n);
        afisare(x, n);

        return 0;
}
void citire(float a[dim], int m)
{
        for (int i = 0; i < m; i++)
        {
                printf("\nx[%d]=", i);
                scanf("%f", &a[i]);
        }
}
float medie(float a[dim],int m)
{
        float s = 0;
        int k = 0;
        for (int i = 0; i < m; i++)
        {
                s += a[i]; k++;
        }
        return s * 1.0 / k * 1.0;
}
void afisare(float a[dim], int m)
{
        float s = medie(a, m);
        for (int i = 0; i < m; i++)
        {
                if (a[i] > s) printf("\n%.2f", a[i]);
        }
}
