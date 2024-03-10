/*Danciu Camelia, anul1 , grupa 2115, laboratorul 10, pb 3
Scrieti o aplicatie care citeste de la tastatura un sir de caractere cu lungimea mai mare decat 7.
Folositi un pointer pt. a accesa si afisa caracterele de pe pozitiile 1, 3, 5 si 7.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
#define max 100
int citire(char s1[max]);
void afisare(char* s);
int main()
{
    char x[max];

    citire(x);
    afisare(x);
    return 0;
}
int citire(char s1[max])
{

    printf("\nIntroduceti sirul de caractere:");
    //scanf_s("%s", &s1);
    cin.getline(s1, 100);

   // printf("\n%s\n", s1);

    while (strlen(s1) <= 7 || strlen(s1) > 100)
    {

        printf("\nIntroduceti alt sir de caractere:");
        cin.getline(s1, 100);
        //scanf_s("%s", &s1);
    }
    return strlen(s1);
}
void afisare(char* s)
{
    int l = strlen(s);
    for (int i = 0; i < l; i++)
    {
        if (i == 1 || i == 3 || i == 5 || i == 7) printf("%c\t", *(s + i));
    }

}
