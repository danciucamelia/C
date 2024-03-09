//Danciu Camelia-Maria, anul 1, grupa 2115, laboratorul 7, pb 14
/*/Sa se scrie un program care citeste de la tastatura un caracter, pe care il
afiseaza pe n randuri, cate n caractere pe un rand, n citit de la tastatura.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define dim 100
int main()
{
        int n;
        printf("\nIntroduceti n:");
        scanf("%d", &n);
        char s,x[dim][dim];
        printf("\nIntroduceti caracterul:");
        scanf("%c", &s);
        for (int i = 0; i < n; i++)
                for(int j=0;j<n;j++)
        {
                        x[i][j] = s;
        }

        for (int i = 0; i < n; i++)
        {
                for (int j = 0; j < n; j++)
                        printf("\t%c", x[i][j]);
                printf("\n");
        }
        return 0;

}
