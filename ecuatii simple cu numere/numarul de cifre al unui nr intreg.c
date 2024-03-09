//Danciu Camelia-Maria, anul 1, grupa 2115, laboratorul 7, pb 10
//numarul de cifre al unui nr intreg
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{
        int n,nr=0;
        printf("\nIntroduceti numarul(maxim 10 cifre):");
        scanf("%d", &n);
        while (n)
        {
                n = n / 10; nr++;
        }
        printf("\nNumarul de cifre al numarului este:%d",nr);

        return 0;
}
