/*Danciu Camelia-Maria, anul 1, grupa 2115,laboratorul 9, pb 1
Sa se scrie un program C/C++ care citeste elementele a doua tablouri unidimensionale de numere intregi
si afiseaza produsul scalar al acestora. Se va folosi o functie care preia elementele de la tastatura si
o alta functie, care calculeaza produsul scalar. Ambele vor utiliza pointeri. Citirea numarului de elemente
ale tabloului si afisarea rezultatului se va face in functia main().*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void citire(int *p, int n);
int prodScalar(int *p1, int *p2, int n);
int main()
{
        int x[100], y[100];
        int n,ps;
        printf("Introduceti dimensiunea tabloului,n<100: ");
        scanf_s("%d", &n);

        citire(x, n);
        citire(y, n);
        ps = prodScalar(x,y,n);
        printf("\nProdusul scalar al celor 2 tablouri este:%d ",ps);
        
        return 0;
}

void citire(int *p, int n)
{
        
        printf("Introduceti elementele tabloului:\n");
        for (int i = 0; i < n; i++)
        {
                printf("\tx[%d] = ",i);
                scanf_s("%d", &p[i]);
        }
}

int prodScalar(int* p1, int* p2, int n)
{
         int  s = 0;
         for (int i = 0; i < n; i++)
         {
                
                 s+= p1[i] * p2[i]; ;
                // printf("%d\t", s);
         }
        return s;
}
