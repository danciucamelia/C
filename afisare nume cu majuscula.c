//Danciu Camelia-Maria, anul 1, grupa 2115, laboratorul 7, pb 5
//citire nume si prenume/afisarea lor cu majuscula
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<cstring>
#include <cctype>
#define dim 20
int main()
{
        char nume[dim], prenume[dim];
        printf("\nIntroduceti numele:");
        scanf("%s", &nume);
        printf("\nIntroduceti prenumele:");
        scanf("%s", &prenume);

        nume[0] = toupper(nume[0]);
        prenume[0] = toupper(prenume[0]);

        printf("\nNumele si prenumele scrise cu majuscule sunt:%s si %s", nume,prenume);

                

        return 0;
}
