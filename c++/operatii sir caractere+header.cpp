
/*Danciu Camelia-Maria, anul1, grupa 2115, lab 5, pb 3
3. Să se scrie programul care citeşte de la tastatură un şir de maxim 10 caractere şi care, pe baza clasei implementate anterior, 
efectuează asupra şirului de intrare operaţiile definite în cadrul clasei.*/
#define _CRT_SECURE_NO_WARNINGS
#define dim 10
#include<string.h>
#include "strClass.h"
#include <iostream>
using namespace std;
int main()
{
        char s[dim];
        myString l;
        cout << "\nIntroduceti sirul de caractere:"; cin.get(s, dim); cin.get();
        cout << "\nLungimea sirului de caractere este:" << l.lungime(s);
        cout << "\nultima pozitie de aparitie a caracterului 'a':" << l.ult_poz(s);
        cout << "\nSirul initial scris cu majuscule este:"<<l.majusc(s);
        cout << "\nSirul initial scris cu minuscule este:"<<l.minusc(s);
        cout << "\nNumarul de aparitii ale caracterului 'a':" << l.nr_ap(s);

        return 0;
}


//__________HEADER:___________

#include<iostream>
using namespace std;
class myString {
        char s[dim];
        
public:
        myString();
        ~myString();
        void setS(char s[]);
        string getS(char s[]);
        size_t lungime(char s[]);
        int ult_poz(char s[]);
        string minusc(char s[]);
        string majusc(char s[]);
        int nr_ap(char s[]);

};
        size_t myString::lungime(char s[]) {
                return strlen(s);
        }
        int myString::ult_poz(char s[]) {
                int poz=0;
                for (int i = 0; i < strlen(s); i++)
                        if (s[i]='a') poz = i;
                return poz;
        }
        string myString::majusc(char s[]) {
                for (int i = 0; i < strlen(s); i++)
                        
                {
                        _strupr(s + i);  
                }
                return s;
        }
        string myString::minusc(char s[]) {
                for (int i = 0; i < strlen(s); i++)
                {
                        _strlwr(s + i); 
                }
                return s;
        }

        int myString::nr_ap(char s[]) {
                int n = 0;
                for (int i = 0; i < strlen(s); i++)
                {
                        if (s[i]=='a') n++;
                }
                return n;
        }

    myString::myString()
    {
        char a[dim];
        strcpy(s, a);

    }
    myString::~myString()
    {
        cout << "\nApel destructor...";
    }

