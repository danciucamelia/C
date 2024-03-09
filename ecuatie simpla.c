//Danciu Camelia-Maria,anul1,gr2115, lab. 4,problema7-varianta cu numere intregi
#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
#include<stdio.h>


float ecuatie(int x, int y, int z);

int main()
{   
        int a, b, c; //declaram a,b,c numere intregi
        float s; //declaram s ca fiind numar real
        printf("introduceti valoarea lui a: ");  //dialog cu utilizatorul
        scanf("%d", &a);   //introducem valoarea lui a
        printf("introduceti valoarea lui b: ");   //dialog cu utilizatorul
        scanf("%d", &b);    //introducem valoarea lui b
        printf("introduceti valoarea lui c: ");  //dialog cu utilizatorul
        scanf("%d", &c);   //introducem valoarea lui c

        s = ecuatie(a, b, c);    //apelam functia in main
        printf("\nRezultatul este: %.3f", s);   //afisam rezultatul
        

        return 0;
}

float ecuatie(int x, int y, int z)  
{
        return  1.0/x + 1.0/y + 1.0/z;   //functia returneaza rezultatul ecuatiei scrise
}


