/*Danciu Camelia-Maria,anul 1, grupa 2115, lab 1, pb 5
Folosind supra�nc?rcarea func?iilor defini?i trei func?ii cu acela?i nume dar cu tipuri diferite de parametri 
(int, int *, int &) care returneaz? radicalul unei valori intregi. Analiza?i cazul transmiterii parametrilor 
prin valoare ?i prin referin??.
*/
#include<iostream>
#include<math.h>
using namespace std;
float rad(int n);
float rad(int* n);
float rad(int& n);
int main()
{

	return 0;
}
float rad(int n)
{
	return sqrt(n);
}
float rad(int* n)
{
	return sqrt(n);
}
float rad(int& n)
{
	return sqrt(n);
}
