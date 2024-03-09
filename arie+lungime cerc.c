//Danciu Camelia-Maria, anul 1, grupa 2115, laboratorul 5,pb7
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define PI 3.14

float l_cerc(int a);
float a_cerc(int a);

int main()
{
        int r; //declaram raza cercului,nr intreg
        float l, a;  //declaram lungimea si aria cercului
        printf("\nIntroduceti valoarea razei cercului:");  //dialog cu utilizatorul
        scanf("%d", &r);  //introducem raza cercului
        l = l_cerc(r);  //apelam functia de calculare a lungimii cercului
        a = a_cerc(r);  //apelam functia de calculare a ariei cercului

        printf("\nLungimea cercului este %.3f:",l);  //afisam lungimea cercului
        printf("\nAria cercului este %.3f:",a); //afisam aria cercului



        return 0;
}

float l_cerc(int a)
{
        return 2*PI*a;  //functia returneaza lungimea cercului
}
float a_cerc(int a)
{
        return PI*a*a; //functia returneaza aria cercului
}
