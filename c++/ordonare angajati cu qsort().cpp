/*Danciu Camelia-Maria, anul1,lab4,pb3
Folosiţi funcţiile de bibliotecă pentru sortări (qsort( )) pentru a aranja un tablou unidimensional de înregistrări cu nume,
prenume, cod numeric personal, data angajării după două câmpuri la alegere (un exemplu ar fi: crescător după nume şi descrescător
după data angajării).*/
#include<iostream>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void citire(struct Pers*, int n);
void afisare(struct Pers*, int n);

struct Dataang {
	int an;
	int luna;
	int zi;
};
struct Pers {

	int cnp;
	char nume[20];
	char prenume[20];
	struct Dataang dataa;
}p[19];
int cmp(const void* a, const void* b);
int cmp_nume(const void* a, const void* b);
int main() {
	struct Pers p[19];


	int n;
	cout << "\nIntroduceti numarul de angajati:"; cin >> n;
	while (n < 0 || n>19)
	{
		cout << "\nIntroduceti alt numar de angajati:"; cin >> n;
	}
	cout << "\nIntroduceti datele angajatilor:";
	for (int i = 0; i < n; i++)
	citire(p+i, n);

	qsort(p, n, sizeof(p[0]), cmp);

	cout << "\nDatele sortate dupa cnp(descrescator):\n";
	for(int i=0;i<n;i++)
	afisare(p+i, n);

	qsort(p, n, sizeof(p[0]), cmp_nume);
	cout << "\nDatele sortate dupa nume(alfabetic):\n";
	for (int i = 0; i < n; i++)
		afisare(p + i, n);

}
void citire(struct Pers* p, int n)
{
	
		cout << "\nIntroduceti numele angajatului:"; cin >> p->nume;
		cout << "\nIntroduceti prenumele angajatului:"; cin >> p->prenume;
		cout << "\nIntroduceti CNP-ul angajatului:"; cin >> p->cnp;
		cout << "\nIntroduceti data angajarii:";
		cout << "\n\tziua:"; cin >> (p->dataa).zi;
		cout << "\n\tluna:"; cin >> (p->dataa).luna;
		cout << "\n\tanul:"; cin >> (p->dataa).an;
	
}
void afisare(struct Pers* p, int n)
{

		cout << "\nNumele angajatului:" << p->nume;
		cout << "\nPrenumele angajatului:" << p->prenume;
		cout << "\nCNP-ul angajatului:" << p->cnp;
		cout << "\ndata angajarii:";
		cout << "\n\tziua:" << (p->dataa).zi;
		cout << "\n\tluna:" << (p->dataa).luna;
		cout << "\n\tanul:" << (p->dataa).an;
	
}
int cmp(const void* a, const void* b) {
	Pers* pa = (Pers*)a;
	Pers* pb = (Pers*)b;
	return (pb->cnp - pa->cnp); 
}
int cmp_nume(const void* a, const void* b)
{
	Pers* pa = (Pers*)a;
	Pers* pb = (Pers*)b;
	return strcmp(pa->nume, pb->nume);

}
