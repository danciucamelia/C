//Danciu Camelia-Maria, anul 1, grupa 2115, lab 8, pb 1
//determinarea valorii medii a elementelor pozitive/negative dintr-un tablou unidimensional.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define dim 20

void citire(float a[dim], int n);
void ValMedie(float a[dim], int n);

int main()
{
        float x[dim];
        int n;
        printf("\nIntroduceti n<=20:");
        scanf("%d", &n);
        citire(x, n);
        ValMedie(x, n);

        return 0;
}
void citire(float a[dim], int n)
{
        
        for (int i = 0; i < n; i++)
        {
                printf("\nx[%d]=",i);
                scanf("%f", &a[i]);
        }
        
}
void ValMedie(float a[dim],int n)
{
        float sn = 0, sp = 0, kp = 0, kn = 0;
        for (int i = 0; i < n; i++)
        {
                if (a[i] >= 0) { sp += a[i]; kp++; }
                else { sn += a[i]; kn++; }
        }
        printf("\nValoarea medie a elementelor pozitive este:%.2f", sp*1.0/kp*1.0);
        printf("\nValoarea medie a elementelor negative este:%.2f", sn*1.0/kn*1.0);

                
}
