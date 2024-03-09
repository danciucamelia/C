//Danciu Camelia-Maria, anul1, grupa 2115, laboratorul 5, problema9
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int d = 100, v1, v2;
	float t,t1;
	printf("\nIntroduceti viteza primei masini(km/h):");
	scanf("%d", &v1);
	printf("\nIntroduceti viteza celei de-a doua masini(km/h):");
	scanf("%d", &v2);

	t = (d*1.0)/(v1 + v2) * 1.0;
	t1= t * 60;
	printf("\nTimpul dupa care acestea se intalnesc este de: %.3f minute", t1);

	return 0;
}
