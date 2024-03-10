//Danciu Camelia-Maria, anul 1, grupa 2115, laboratorul 10,pb2/3
//determinarea celui mai mic element pozitiv dintr-un tablou unidimensional.
//folosind pointeri
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define dim 30

void citire(float* p, int m);
float minim(float a[dim], int m);

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
float minim(float a[dim], int m)
{
        float* min = &a[0];
        //int k = 0;
        for (int i = 0; i < m; i++)
        {

                if (*(a + i) < *min )* min = *(a + i);
        }
        //if (k == 0) printf("\nNu exista valori pozitive in tablou.");
        return *min;
}
