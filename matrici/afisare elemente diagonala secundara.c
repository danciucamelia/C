
/*Danciu Camelia-Maria, anul 1, grupa 2115, laboratorul 8, pb 12
 Sa se citeasca de la tastatura elementele intregi ale unei matrice de dimensiune m x n.
Daca matricea este patratica sa se afiseze elementele diagonalei secundare, altfel sa se afiseze suma
elementelor de pe o coloana data, c. Valorile m, n si c se citesc de la tastatura si se vor scrie functii pentru operatiile cerute.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#define dim 20
void citire(int x[20][20], int a, int b);
void patratica(int x[20][20], int b, int a, int c);

int main()
{
        int m, n, x[20][20], c;
        printf("\nm=");
        scanf("%d", &m);
        printf("\nn=");
        scanf("%d", &n);
        printf("\nc=");
        scanf("%d", &c);

        citire(x, m, n);
        patratica(x, n, m, c);
        return 0;
}

void citire(int x[20][20], int a, int b)
{
        for (int i = 0; i < a; i++)
                for (int j = 0; j < b; j++)
                {
                        printf("\nx[%d][%d]=", i, j);
                        scanf("%d", &x[i][j]);
                }
}
void patratica(int x[20][20], int b, int a, int c)
{    
        int s = 0,i,j;

        for ( i = 0; i < a; i++)
        {
                for ( j = 0; j < b; j++)

                        if ((a == b) && (i == j))  printf("\t%d", x[i][j]);
                if (a != b) s += x[i][c];

                }
        if (s != 0) printf("\nSuma elementelelor coloanei %d este:%d", c, s);
        
}
        
