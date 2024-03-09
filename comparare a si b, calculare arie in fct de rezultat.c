/*Danciu Camelia - Maria, anul 1, grupa 2115, laboratorul 6, problema 9 / calcularea ariei unui cerc daca a si b sunt egale sau
a unui dreptunghi daca a si b sunt diferite*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define PI 3.14
float aria_cerc(int x);
float aria_dreptunghi(int x, int y);

int main()
{
        int a, b;
        float arie;

        printf("\nIntroduceti valoarea lui a:");
        scanf("%d", &a);
        printf("\nIntroduceti valoarea lui b:");
        scanf("%d", &b);
        if (a == b) { arie = aria_cerc(a); printf("\Aria cercului cu raza %d este %.2f", a, arie); }
        else { arie = aria_dreptunghi(a, b); printf("\nAria dreptunghiului cu laturile %d si %d este: %.2f", a, b, arie); }




        return 0;
}

float aria_dreptunghi(int x, int y)
{
        return x * y;
}

float aria_cerc(int x)
{
        return PI * x * x;
}
