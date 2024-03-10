/*Danciu Camelia-Maria, anul 1, grupa 2115, laboratorul 10, pb 7
Sa se scrie un program care preia din linia de comanda siruri de caractere si afiseaza sirul rezultat din concatenarea acestora.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<cstring>
int main(int argc, char* argv[])
{
        int i;
        char s[100]="";
        
        if (argc == 1) {
                printf("\nNu ati introdus sirurile de caractere!");
                exit(1);
        }
        else {
                for (i = 1; i < argc; i++){
                        
                        strcat(s, argv[i]);
        } 
        printf("\nSirurile concatenate sunt acum sirul: %s", s);
}
return 0; 
} 
