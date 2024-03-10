/*Danciu Camelia-Maria, anul 1, grupa 2115, laboratorul 8, pb 10
Scrieti programul care citeste elementele intregi ale unui tablou unidimensional si construieste
intr-o functie un alt tablou unidimensional in care se vor stoca resturile impartirii elementelor
primului tablou la numarul elementelor pozitive din acesta.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int citire(int x[100], int n);
void rest(int x[100], int n);

int main()
{
        int x[100], n;
        printf("\nIntroduceti numarul de elemente ale tabloului(max. 100):");
        scanf("%d", &n);
        //citire(x,n);
        rest(x, n);
        return 0;
}
int citire(int x[100], int n)
{
        int nr = 0;
        
        for (int i = 0; i < n; i++)
        {
                printf("\nx[%d]=", i);
                scanf("%d", &x[i]); 
                if(x[i]>0) nr++;
        }
        return nr;
}
void rest(int x[100], int n)
{
        int k = citire(x, n),a[100];
        for (int i = 0; i < n; i++)
        {
                a[i] = x[i] % k;
        }

        for (int i = 0; i < n; i++)
        {
                printf("%d\t", a[i]);
        }
}
