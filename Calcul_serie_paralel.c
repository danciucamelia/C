//Danciu Camelia-Maria, anul1, grupa 2115, laboratorul 5, problema2
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

float echiv_paralel(float a, float b);
float echiv_serie(float a, float b);



int main()
{
	//int R1, R2;
	float pc, sc, C1, C2;
	float pr, sr, R1, R2;
	printf("\n Introduceti valoarea primei rezistente: ");
	scanf("%f", &R1);
	printf("\n Introduceti valoarea celei de-a doua rezistente: ");
	scanf("%f", &R2);
	pr = echiv_paralel(R1, R2);
	sr = echiv_serie(R1, R2);


	printf("\n Introduceti valoarea primei capacitati: ");
	scanf("%f", &C1);
	printf("\n Introduceti valoarea celei de-a doua capacitati: ");
	scanf("%f", &C2);
	pc = echiv_serie(C1, C2);
	sc = echiv_paralel(C1, C2);


	printf("\nRezistenta echivalenta in serie este: %.3f", sr);
	printf("\nRezistenta echivalenta in paralel este: %.3f", pr);



	printf("\nCapacitatea echivalenta in serie este: %.4f", sc);
	printf("\nCapacitatea echivalenta in paralel este: %.4f", pc);



	return 0;
}

float echiv_paralel(float a, float b)
{
	return (a * b / (a + b));
}

float echiv_serie(float a, float b)
{
	return a + b;
}
