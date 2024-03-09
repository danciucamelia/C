
﻿/*Danciu Camelia-Maria, anul 1, grupa 2115, lab 13, pb 2
Să se scrie un program care citeşte dintr-un fişier text 10 numere întregi (generat in prealabil prin program sau extern).
Să se scrie funcţiile care:
a. aranjează crescător/descrescator şirul si afiseaza rezultatul;
b. numără câte elemente sunt pare si afiseaza rezultatul.
Adăugați în fișierul original noile rezultate obținute.*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
void citire(int x[]);
void ordonare(int x[]);
int main(void)
{
    int x[10], m, s = 0;
    FILE* f;
    f = fopen("numere.txt", "r+");

   
    citire(x);
    
    ordonare(x);
    fprintf(f, "\nNumerele scrise in ordine crescatoare sunt:");
    for (int i = 0; i < 10; i++)
    {

        fprintf(f, "%d\t", x[i]);
    }
    fprintf(f, "\nIn fisier sunt %d numere pare.", s);
    fclose(f);



    return 0;
}
void citire(int x[])
{
    for (int i = 0; i < 10; i++)
    {
        fscanf_s(f, "%d", &x[i]);
        if (x[i] % 2 == 0) s++;

    }
}
void ordonare(int x[])
{
    int m;
    for (int i = 0; i < 10; i++)
        for (int j = i; j < 10; j++)
        {
            if (x[i] > x[j]) { m = x[i]; x[i] = x[j]; x[j] = m; }
        }

}