//Danciu Camelia-Maria,anul1,grupa 2115, lab 4, problema 5

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <iostream>
#include <cstring>

using namespace std;

float med_ponderata(int a, int b, int c);

int main()
{    
        int x, y, z;
        float sp;
        printf("Introduceti valoarea lui x: ");//dialog cu utilizatorul
        scanf("%d", &x);//introducem valoarea lui x
        printf("Introduceti valoarea lui y: ");//dialog cu utilizatorul
        scanf("%d", &y);//introducem valoarea lui y
        printf("Introduceti valoarea lui z: "); //dialog cu utilizatorul
        scanf("%d", &z);//introducem valoarea lui z

        sp = med_ponderata(x, y, z); //apelam functia de calculare a mediei ponderate
        printf("Rezultatul este %.3f", sp); //afisam rezultatul

        return 0;
}

float med_ponderata(int a, int b, int c)  //funcia de calculare a mediei ponderate
{
        return (a*1.0+b*1.0+c*1.0)/3.0;  //functia returneaza media ponderata a numerelor,fiecare dintre ele avand ponderea 1
}
