/*Danciu Camelia-Maria, anul 1 , grupa 2115, laboratorul 10, pb 6
Scrieti un program in care sa definiti un tablou de pointeri spre siruri de caractere, pe care
sa-l initializati cu diferite mesaje. Afisati mesajele.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
        const char* p[] = { "Buna ziua!","Data de azi este: 19/12/2021","Peste 12 zile este anul nou.","An nou fericit!"};

        printf("\n%s", *p);
        printf("\n%s", *(p + 1));
        printf("\n%s", *(p + 2));
        printf("\n%s", *(p + 3));

        return 0;
}
