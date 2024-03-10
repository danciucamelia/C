/*Danciu Camelia-Maria, anul 1, grupa 2115,laboratorul 9,pb 3
Sa se scrie un program C/C++ in care se citesc de la tastatura numere reale, ce vor fi stocate intr-un 
tablou unidimensional. Sa se scrie o functie care copiaza intr-un alt tablou toate valorile din primul tablou,
care sunt mai mari decat valoarea medie a numerelor preluate. Se vor folosi pointeri si se vor afisa in main() 
valorile din cele doua tablouri.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

float citire(int* t, int n);
void afisare(int* t, int* t1, int n);

int main()
{
        int x[100],y[100], n;

        printf("\nIntroduceti dimensiunea tabloului,n<100:");
        scanf("%d", &n);
        
         afisare(x, y, n);

        return 0;
}
float citire(int* t, int n)
{
        int k = 0,s=0;
        
        printf("\nIntroduceti elementele tabloului:");
        for (int i = 0; i < n; i++)
        {
                printf("\nx[%d]=",i); scanf("%d", &t[i]); s+= t[i]; k++;
        }
        return s * 1.0 / k * 1.0;
}
void afisare(int* t, int* t1,int n)
{
        float m = citire(t, n);
        int l = 0;
        for(int i=1;i<n;i++)
        {
                if (t[i] > m) { t1[l] = t[i]; l++; }
        }
        printf("\nPrimul tablou este: ");
        for (int i = 0; i < n; i++)
        {
                printf("%d\t",t[i]);
        }
        printf("\n");

        printf("\nCel de-al doilea tablou este: ");
        for (int i = 0; i < l; i++)
        {
                printf("%d\t", t1[i]);
        }
}
