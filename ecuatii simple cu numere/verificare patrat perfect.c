//Danciu Camelia-Maria, anul 1, grupa 2115, laboratorul 7, pb 2
//verificarea unui numar daca este sau nu patrat perfect
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
        int n,k=0;
        printf("\nIntroduceti numarul n:");
        scanf("%d", &n);
        for(int i=0;i<n/2;i++)
        {
                if (i * i == n)  k ++;
                
        }
        if(k) printf("\nNumarul este patrat perfect.");
        else printf("\nNumarul introdus NU este patrat perfect.");

        return 0;
}
