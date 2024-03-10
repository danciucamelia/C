/*Danciu Camelia-Maria, anul 1, grupa 2115, laboratorul 8, pb 11
* Se citeste de la tastatura un sir de caractere. Scrieti functia care inverseaza sirul si apoi formeaza 
un alt sir de caractere ce va contine elementele de pe pozitiile pare ale sirului inversat. Afisati sirurile obtinute.
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<cstring>
#include<iostream>
using namespace std;

float citire(char s[100]);
void inversare(char s[100]);

int main()
{
        char s[100];

        //citire(s);
        inversare(s);

        return 0;
}
float citire(char s[100])
{
        printf("\nIntroduceti sirul de caractere(max. 100 caractere):");
        int l = 0;
        cin.get(s, 100);
        cin.get();
        l = strlen(s);
        return l;
}
void inversare(char s[100])
{
        int l = citire(s),i=0,d=l;
        char b[100];
        //while (l > 0)
        {
                for (int i = 0; i < l; i++)
                {
                        b[i] = s[d - 1]; d--;
                }
        }

        for (int i =0; i<l; i++)
        {
                if(i%2==0)
                printf("%c", b[i]);
        }

}
