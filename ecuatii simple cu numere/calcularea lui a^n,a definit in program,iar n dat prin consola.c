//Danciu Camelia-Maria, anul 1, grupa 2115,laboratorul 7,pb 3
//calcularea lui a^n,a definit in program,iar n dat prin consola
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define a 5
int main()
{
        int n,p=1;
        printf("\nIntroduceti n:");
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
                p = p * a;

        }
        printf("\nValoarea lui a^n este:%d", p);

        return 0;
}
