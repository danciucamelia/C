
/*Danciu Camelia-Maria,anul 1, grupa 2115, laboratorul 9,pb2
Sa se scrie o aplicatie C/C++ in care se genereaza aleator 20 de numere intregi cu valori mai mici 
decat 50 (Folositi srand(), rand() si operatorul %). Sa se scrie o functie care elimina din tabloul
unidimensional creat numerele impare. Functia va utiliza pointeri. Afisati in main() tabloul initial si cel obtinut
dupa eliminarea elementelor impare.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void tablou(int* p);
void eliminare(int* p);

int main()
{
        int x[20],n;
        tablou(x);
        eliminare(x);
        
        return 0;
}
void tablou(int *p)
{
        for(int i=0;i<20;i++)
        {
                p[i] = rand() % 51;
        }
        printf("\nTabloul initial este:\n");
        for (int i = 0; i < 20; i++)
        {
                printf("%d\t", p[i]);
        }
        printf("\n");
}
void eliminare(int* p)
{
        int l = 0,p1[20];
        printf("\n");
                for (int i = 0; i < 20; i++)
                {
                        if (p[i] % 2 == 0) { p1[l] = p[i]; l++; }
                }
                for (int i = 0; i < l; i++)
                {
                        printf("%d\t", p1[i]);
                }
}
