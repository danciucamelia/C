//Danciu Camelia-Maria, anul 1, grupa 2115, laboratorul 7, pb 9
//catul a 2 intregi, folosind scaderi succesive
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int catul(int x, int y);

int main()
{
        int a, b;

        printf("\nIntroduceti primul numar:");
        scanf("%d", &a);
        printf("\nIntroduceti al doilea numar:");
        scanf("%d", &b);

        printf("%d", catul(a, b));

        return 0;
}

int catul(int x, int y)
{
        int c=0;
        if (x < y) do { y = y - x; c++; } while (x < y);
        if (x > y) do { x = x - y; c++; } while (x>y);
        if (x == y) c = x / y;
        return c;
}
