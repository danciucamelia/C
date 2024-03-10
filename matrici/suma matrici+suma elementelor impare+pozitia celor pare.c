//Danciu Camelia-Maria, anul 1, grupa 2115, laboratorul 8, pb 6
/*Scrieti o aplicatie C/C++ care defineste doua matrici de valori intregi. Dimensiunea si elementele matricilor
sunt citite de la tastatura. Scrieti functiile care:
a) afiseaza pozitiile elementelor pare din fiecare matrice;
b) afiseaza suma elementelor impare din ambele matrice;
c) afiseaza suma matricelor;*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define dim 20

void citire(int x[dim][dim],int y[dim][dim],int c, int d);
void pozPare(int x[dim][dim], int y[dim][dim],int c,int d);
int sumaImp(int x[dim][dim], int y[dim][dim],int c,int d);
void suma(int x[dim][dim], int y[dim][dim],int c,int d);

int main()
{
        
        int a[dim][dim], b[dim][dim], n, m;
        printf("\nIntroduceti numarul de linii<20:");
        scanf("%d", &n);
        printf("\nIntroduceti numarul de coloane<20:");
        scanf("%d", &m);
        
        citire(a, b,n,m);
        pozPare(a, b,n,m);
        printf("\nSuma elementelor impare ale celor doua matrici este: %d.", sumaImp(a, b,n,m));
        printf("\n");
        suma(a, b,n,m);
        return 0;
  }
void citire(int x[dim][dim],int y[dim][dim],int c,int d)
{
        printf("\nIntroduceti elementele primei matrici:");

        for(int i=0;i<c;i++)
                for (int j = 0; j < d; j++)
                {
                        printf("\na[%d][%d]=", i, j);
                        scanf("%d", &x[i][j]);
                }
        printf("\nIntroduceti elementele celei de-a doua matrici:");

        for (int i = 0; i < c; i++)
                for (int j = 0; j < d; j++)
                {
                        printf("\nb[%d][%d]=", i, j);
                        scanf("%d", &y[i][j]);
                }

}

void pozPare(int x[dim][dim],int y[dim][dim],int c,int d)
{
        printf("\nPozitiile elementelor pare ale primei matrici sunt:\n");
        for (int i = 0; i < c; i++)
        for (int j = 0; j < d; j++)
        {
                if (x[i][j] % 2 == 0) printf("\n(%d,%d)", i, j);
        }
        printf("\n");
        printf("\nPozitiile elementelor pare ale celei de-a doua matrici sunt:");
        for (int i = 0; i < c; i++)
                for (int j = 0; j < d; j++)
                {
                        if (y[i][j] % 2 == 0) printf("\n(%d,%d)", i, j);
                }

}
int sumaImp(int x[dim][dim], int y[dim][dim],int c, int d)
{
        int s = 0;
        for (int i = 0; i < c; i++)
                for (int j = 0; j < d; j++)
                {
                        if (x[i][j] % 2 == 1) s += x[i][j];
                }
        //printf("\nPozitiile elementelor pare ale celei de-a doua matrici sunt:");
        for (int i = 0; i < c; i++)
                for (int j = 0; j < d; j++)
                {
                        if (y[i][j] % 2 == 1) s += y[i][j];
                }
        if (s == 0) printf("\nNu exista elemente impare in cele 2 matrici.");
        return s;
}

void suma(int x[dim][dim], int y[dim][dim],int c,int d)
{
        printf("\nSuma celor 2 matrici este:\n");
        for (int i = 0; i < c; i++)
                for (int j = 0; j < d; j++)
                {
                        x[i][j] = x[i][j] + y[i][j];
                }
        for (int i = 0; i < c; i++)
        {
                for (int j = 0; j < d; j++)

                        printf("%d ", x[i][j]);
                printf("\n");
                }
        

}
