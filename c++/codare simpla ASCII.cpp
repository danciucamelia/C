/*Danciu Camelia-Maria, anul1, grupa 2115, lab 1, pb7
Scrieţi un program care face o codare simplă prin adaugarea la codul ASCII al caracterului, o valoare n=3,
folosind macro funcții. Exemplu: ‘a’ devine în urma codării ‘d’.*/

#include<stdlib.h>
#define AS(c)
{c=atoi(c);\
c = c + 3; \
c=itoa(c);\
}
#include<iostream>
using namespace std;

int main()
{
	char c;
	cout << "\nIntroduceti un caracter:";
	cin >> c;
	cout << "\nCaracterul rezultat dupa adaugarea la codul ASCII este:" << c;

	return 0;
}
