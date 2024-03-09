//Danciu Camelia-Maria,anul1,grupa 2115, lab 4, problema 4

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{

        char s[100] = "\"Buna ziua!\nData de azi este:\n31.10.2021\"", s1[100], s2[100];//declaram cele 3 siruri de caractere, s fiind initializat
        cout << "Introduceti sirul de caractere: "; //dialog cu utilizatorul
        cin.get(s1, 100); //comanda pentru introducerea sirului de caractere, incluzand " "
        cin.get();  //comanda pentru introducerea caracterului nul in sirul de caractere
        //urmeaza introducerea celui de-al doilea sir,si cu cin.get() putem citi in continuare alt sir 
        cout << "Introduceti alt sir de caractere: "; //dialog cu utilizatorul
        cin.get(s2, 100);
        //cin.get();
        cout << "Sirurile de caractere sunt: \n" << s << "(cel initializat)\n" << s1 <<endl<< s2; //afisam sirurile de caractere


        return 0;
}
