/*Danciu Camelia-Maria, anul 1, grupa 2115, laboratorul 8, pb 9
Sa se scrie o aplicatie C/C++ in care se citesc intr-un tablou unidimensional "n" valori intregi si se determina 
numarul elementelor negative impare. Sa se afiseze acest numar si elementele respective
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define dim 100

void citire(int x[dim], int m);
void iNeg(int x[dim], int m);

int main()
{
        int n,a[dim];
        printf("\nIntroduceti n<100:");
        scanf("%d", &n);

        citire(a,n);
        iNeg(a,n);

        return 0;
}
void citire(int x[dim], int m)
{
        for (int i = 0; i < m; i++)
        {
                printf("\nx[%d]=", i);
                scanf("%d", &x[i]);
        }
}
void iNeg(int x[dim], int m)
{

        printf("\nNumerele impare negative sunt:");
        int k = 0;
        for (int i = 0; i < m; i++)
        {
                if ((x[i] % 2 !=0) && (x[i] < 0)) { printf("\t%d", x[i]); k++; }
        }
        printf("\nSi sunt in numar de %d.", k);
}
