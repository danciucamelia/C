//Danciu Camelia-Maria,anul 1, grupa 2115, laboratorul 7, pb 7
//toti divizorii unui numar
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void div(int m);

int main()
{
        int n;
        printf("\nIntroduceti n:");
        scanf("%d", &n);

        div(n);
        return 0;
}
void div(int m)
{
        printf("\nDivizorii lui %d sunt:", m);
        for (int i = 1; i <= m; i++)
        {
                if (m % i == 0) printf("\n%d\t", i);
        }

}
