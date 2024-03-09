/*Danciu Camelia - Maria, anul 1, grupa 2115, laboratorul 7, pb 12
Sa se citeasca un numar intreg n de la tastatura.
Se citesc apoi numere reale, pana cand suma lor depaseste valoarea lui n.
Sa se afiseze suma numerelor citite, cu o precizie de 2 zecimale si numarul lor(cate s-au introdus).*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define dim 100
int main()
{
        int n,i=0;
        float x[dim],s=0;
        printf("\nIntroduceti numarul n:");
        scanf("%d", &n);
        do
        {
                printf("\nx=");
                scanf("%f", &x[i]); s += x[i]; i++;
                
        } while (s < n);
        printf("\nSuma numerelor introduse este:%.2f, iar numarul lor este de %d numere reale. ", s, i);

        return 0;
}
