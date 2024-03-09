//Danciu Camelia-Maria, anul 1, grupa 2115, laboratorul 7, pb 11
//se citesc n numere intregi/se afiseaza numerele impare din sir
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define dim 20
int main()
{
        int n,x[dim];
        printf("\nIntroduceti numarul de numere(<20):");
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
                printf("\nIntroduceti x[%d]:",i);
                scanf("%d", &x[i]);
        }

        printf("\nNumerele impare din sir sunt:");
        for (int i = 0; i < n; i++)
        {
                if (x[i] % 2 != 0) printf("\n%d", x[i]);
        }


        return 0;
}
