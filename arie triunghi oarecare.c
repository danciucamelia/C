//Danciu Camelia-Maria, anul1, grupa 2115, laboratorul6, pb 2
//citire lungimi laturi(nr. intregi)+afisarea ariei triunghiului
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>;
#include<math.h>

float semiperimetru(int x, int y, int z);
float arie(int x, int y, int z);



int main()
{

        int a, b, c;
        float arie_;

        printf("\Introduceti valoarea primei laturi:");
        scanf("%d", &a);
        printf("\Introduceti valoarea celei de-a doua laturi:");
        scanf("%d", &b);
        printf("\Introduceti valoarea celei de-a treia laturi:");
        scanf("%d", &c);

        arie_ = arie(a, b, c);

        printf("\Aria triunghiului cu laturile %d,%d,%d este: %f", a, b, c, arie_);

        return 0;
}

float semiperimetru(int x, int y, int z)
{
        return (x + y + z)*1.0/2.0;
}

float arie(int x, int y, int z)
{
        int p;
        p = semiperimetru(x, y, z);

        return sqrt(p * (p - x) * (p - y) * (p - z)) * 1.0;

}

