//Danciu Camelia-Maria anul 1, grupa 2115, laboratorul 6, pb5
//citirea unui numar intreg+ afisarea numarului de zero-uri din reprezentarea sa binara
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
        int n,k=0;
        printf("\nIntroduceti numarul intreg n:");
        scanf("%d", &n);
        do {
                if (n % 2 == 0) k++;

                n = n / 2;
        } while (n);


        printf("\nNumarul de zero-uri din reprezentarea binara a lui n este de: %d", k);
        
        return 0;
}
