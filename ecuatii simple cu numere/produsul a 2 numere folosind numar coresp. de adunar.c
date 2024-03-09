//Danciu Camelia-Maria, anul 1, grupa 2115, laboratorul 7, pb 8
//produsul a 2 numere folosind numar coresp. de adunari
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int produs(int x, int y);

int main()
{
        int a, b;
        printf("\nIntroduceti primul numar:");
        scanf("%d", &a);
        printf("\nIntroduceti al doilea numar:");
        scanf("%d", &b);

        printf("\nProdusul numerelor este:%d", produs(a, b));
        return 0;
}
int produs(int x, int y)
{
        int p=0;
        for (int i = 0; i < x; i++)
        {
                p = p + y;
        }
return p;
}
