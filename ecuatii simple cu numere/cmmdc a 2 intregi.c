//Danciu Camelia-Maria, anul 1, grupa 2115, laboratorul 7, pb 6
//cel mai mare divizor comun a 2 intregi
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int cmmdc(int x, int y);
int main()
{
        int a,b;
        printf("\nIntroduceti a, un numar intreg:");
        scanf("%d", &a);
        printf("\nIntroduceti b,un numar intreg:");
        scanf("%d", &b);

        printf("\nCel mai mare divizor comun al numerelor este: %d", cmmdc(a, b));

        return 0;
}

int cmmdc(int x, int y)
{
        int z=1,m;
        if (x > y) m = y;
        else m = x;
        for (int i = 1; i <= m; i++)
        {
                if (x % i == 0 && y % i == 0) z = i;
        }


         return z;
        
}
