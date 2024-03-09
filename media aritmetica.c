//Danciu Camelia-Maria,anul1,gr2115, lab. 4,problema1
#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
#include<stdio.h>

float media_a(float x, float y, float z);

int main()
{
        float a, b, c, m; //declaram a,b,c numere neintregi si m media acestora

        printf("Introduceti valoarea lui a: "); //dialog cu utilizatorul
        scanf("%f", &a);      //introducem valoarea lui a
        printf("Introduceti valoarea lui b: "); //dialog cu utilizatorul
        scanf("%f", &b);  //introducem valoarea lui b
        printf("Introduceti valoarea lui c: "); //dialog cu utilizatorul
        scanf("%f", &c); //introducem valoarea lui c

        m = media_a(a, b, c); //apelam functia

        printf("Rezultatul este: %.3f ", m); //afisam rezultatul 

        return 0;
}

float media_a(float x, float y, float z)
{
        return (x + y + z) / 3;  //functia returneaza media aritmetica a numerelor
}
