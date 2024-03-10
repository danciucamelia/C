//determinarea celui mai mic element pozitiv dintr-un tablou unidimensional.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define dim 30

void citire(float* p, int m);
float minim(float* p, int m);

int main()
{
        int n;
        float x[dim];

        printf("\nIntroduceti n<=30:");
        scanf("%d", &n);

        citire(x, n);
        printf("\nMinimul este:%.2f", minim(x, n));

        return 0;
}
void citire(float* p, int m)
{

        for (int i = 0; i < m; i++)
        {
                printf("\nx[%d]:", i);
                scanf("%f", p + i);

        }
}
float minim(float* p, int m)
{
        float* min = &p;
        for (int i = 0; i < m; i++)
        {

                if (a + i < min) min++;
        }
        return min;
}
