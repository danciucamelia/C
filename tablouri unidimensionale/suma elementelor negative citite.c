/*Danciu Camelia-Maria, anul 1, grupa 2115, lab 11, pb1
Sa se scrie un program care citeste n numere reale, pe care le stocheaza intr-un tablou alocat dinamic,
afiseaza suma elementelor negative citite, iar la sfarsit elibereaza zona de memorie alocata.*/
#define _CRT_SECURE_NHO_WARINGS
#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
        int i, n,sum=0, * tab;
        printf("\nIntroduceti dimensiunea tabloului : ");
        scanf_s("%d",&n);
        tab = new int[n];
        if (tab != 0) {
                printf("\n Introduceti elementele tabloului : ");
                for (i = 0; i < n; i++) {
                        printf("\n\t Elementul %d al tabloului:",i);
                        
                        cin >> *(tab + i); if (*(tab + i) < 0) sum += *(tab + i);
                }
                printf("\n\n Elementele tabloului sunt:\n");
                for (i = 0; i < n; i++)
                        printf("%d ",*(tab+i));
                        
        }
        else
                printf("\nAlocare nereusita !");
        if (sum) printf("\nSuma elementelor negative este:%d", sum);
        else printf("\nNu exista elemente negative in tablou.");
        if (tab)
                delete[]tab;
        return 0;
}
