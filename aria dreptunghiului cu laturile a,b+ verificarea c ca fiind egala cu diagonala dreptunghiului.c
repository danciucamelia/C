//Danciu Camelia-Maria, anul 1 , gruupa 2115, laboratorul 7, problema 1
//aria dreptunghiului cu laturile a,b+ verificarea c ca fiind egala cu diagonala dreptunghiului
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

float aria(int x, int y);
float diagonala(int x, int y);

int main()
{
        int a, b, c;
        float aria_,d;
        printf("\nIntroduceti valoarea lui a:");
        scanf("%d", &a);
        printf("\nIntroduceti valoarea lui b:");
        scanf("%d", &b);
        printf("\nIntroduceti valoarea lui c:");
        scanf("%d", &c);

                d = diagonala(a, b);
                aria_ = aria(a, b);

                printf("\nAria dreptunghiului det. de a si b este: %.3f", aria_);
                printf("\nDiagonala dreptunghiului este:%.3f", d);

                if (c == d) printf("\nValoarea lui c este egala cu cea a lui d");
                else printf("\nValoarea lui c NU este egala cu cea a lui d");

        return 0;
}
float aria(int x, int y)
{
        return x* y;
}
float diagonala(int x,int y)
{
        return sqrt(x * x + y * y)*1.0;
}
