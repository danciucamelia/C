//Danciu Camelia-Maria, anul1, gr2115,lab 4,pb2

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<cstdio>
#include<math.h>

float med_geometrica(int a, int b);


int main()
{
        int x, y; //declaram x,y numere intregi
        float m; //declaram media geometrica,nr real
        
        printf("\nIntroduceti valoarea lui x: "); //dialog cu utilizatorul
        scanf("%d", &x);    //introducem valoarea lui x
        printf("\nIntroduceti valoarea lui y: "); //dialog cu utilizatorul
        scanf("%d", &y);   //introducem valoarea lui y
        m = med_geometrica( x, y);  //apelam functia pentru calcularea mediei
        printf("\nMedia geometrica a numerelor este: %.3f", m);  //afisam rezultatul


        return 0;
}

float med_geometrica(int a, int b)
{
        return sqrt(a * b) * 1.0;  //functia calculeaza si returneaza media geometrica a numerelor
}
