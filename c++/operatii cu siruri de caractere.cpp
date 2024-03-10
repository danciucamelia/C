/*Danciu Camelia-Maria, anul1, grupa 2115, lab 5, pb 2
2. Să se definească o clasă numită myString (într-un fişier numit strClass.h) care să fie compusă din metodele specifice care
efectuează următoarele operaţii pe şiruri de caractere:
- determină lungimea şirului primit la intrare.
- determină ultima poziţie de apariţie a unui anumit caracter din şirul de intrare.
- returnează şirul primit la intrare, scris cu caractere majuscule.
- returnează şirul primit la intrare, scris cu caractere minuscule.
- returnează numărul de apariţii ale unui anumit caracter din şirul primit.*/
#define _CRT_SECURE_NO_WARNINGS
#define dim 100
#include<string.h>
#include "strClass.h"
#include <iostream>
using namespace std;
int main()
{
	myString l;
	char s[] = "Aceasta este tema de la laboratorul 5.";
	cout << "\nLungimea sirului de caractere este:" << l.lungime(s);
	cout << "\nultima pozitie de aparitie a caracterului 'a':" << l.ult_poz(s);
	cout << "\nSirul initial scris cu majuscule este:" << l.majusc(s);
	cout << "\nSirul initial scris cu minuscule este:" << l.minusc(s);
	cout << "\nNumarul de aparitii ale caracterului 'a':" << l.nr_ap(s);

	return 0;
}
//___________HEADER:___________
#include<iostream>
using namespace std;
class myString {
	char s[];
	
public:
	myString();
	~myString();
	void setS();
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
			if (s[i]=='a') poz = i;
		return poz;
	}
	string myString::majusc(char s[]) {
		for (int i = 0; i < strlen(s); i++)
			
		{
			_strupr(s+i);
		}
		return s;
	}
	string myString::minusc(char s[]) {
		for (int i = 0; i < strlen(s); i++)
		{
			_strlwr(s+i);
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
	string getS(char s[])
	{
		return s;
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

