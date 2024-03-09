//Danciu Camelia-Maria,anul1,gr2115, lab. 4,problema7-varianta cu numere reale
#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
#include<stdio.h>


float ecuatie(int x, int y, int z);

int main()
{   
        float a, b, c; //declaram a,b,c numere reale
        float s; //declaram s ca fiind numar real
        printf("introduceti valoarea lui a: ");  //dialog cu utilizatorul
        scanf("%f", &a);   //introducem valoarea lui a
        printf("introduceti valoarea lui b: ");   //dialog cu utilizatorul
        scanf("%f", &b);    //introducem valoarea lui b
        printf("introduceti valoarea lui c: ");  //dialog cu utilizatorul
        scanf("%f", &c);   //introducem valoarea lui c

        s = ecuatie(a, b, c);    //apelam functia in main
        printf("\nRezultatul este: %.3f", s);   //afisam rezultatul
        

        return 0;
}

float ecuatie(int x, int y, int z)  
{
        return  1/x + 1/y + 1/z;   //functia returneaza rezultatul ecuatiei scrise
}
