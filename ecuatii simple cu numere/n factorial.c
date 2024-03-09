//Danciu Camelia-Maria, anul 1, grupa 2115, laboratorul 7, pb 4
//calculam n!(n se citeste de la tastatura
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int factorial(int m, int p);

int main()
{
        int n, pr=1;
        printf("\nIntroduceti n:");
        scanf("%d", &n);

        printf("\nValoarea lui n! este:%d",factorial(n,pr));

        return 0;
}

int factorial(int m,int p=1)
{
        //int m,p=1;
        for (int i = 1; i <= m; i++)
                p = p * i;

        return p;

}
