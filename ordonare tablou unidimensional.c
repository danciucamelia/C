//Danciu Camelia-Maria, anul 1, grupa 2115, laboratorul 8, pb 3
/*se citeste de la tastatura un tablou de 10 valori intregi.Definiti o functie
care primeste tabloul ca parametru si apoi il afiseaza ordonat crescator.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define dim 10

void citire(int a[dim]);
void ordonare(int a[dim]);

int main()
{
        int x[dim];

        citire(x);
        ordonare(x);

        return 0;
}
void citire(int a[dim])
{
        printf("\nIntroduceti elementele tabloului:");
        for (int i = 0; i < dim; i++)
        {
                printf("\nx[%d]:",i);
                scanf("%d", &a[i]);
        }
}
void ordonare(int a[dim])
{
        float aux;

        for (int i = 0; i < dim; i++)
                for(int j=i+1;j<dim;j++)
        {
                if (a[i] > a[j]) { aux = a[i]; a[i] = a[j]; a[j] = aux; }
        }
        
        for (int i = 0; i < dim; i++)
        {
                printf("%d\t", a[i]);
        }
}
