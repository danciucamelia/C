//Danciu Camelia-Maria, anul 1, grupa 2115, laboratorul 5, problema 6
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<cstring>

float media_(float a, float b);

int main()
{
	float n1, n2,m;  //declaram notele si media acestora ca numere reale
	char s1[21], s2[21];  //declaram sirurile de caractere care vor reprezenta numele studentilor

	printf("\nIntroduceti numele primului student si nota acestuia:");  //dialog cu utilizatorul
	scanf("%s",&s1);   //introducem numele primului student
	printf("\nIntroduceti nota primului student:");  //dialog cu utilizatorul
	scanf("%f",&n1);  //introducem nota primului student


	printf("\nIntroduceti numele celui de-al doilea student:");   //dialog cu utilizatorul
    scanf("%s",&s2);   //introducem numele celui de-al doilea student
	printf("\nIntroduceti nota celui de-al doilea student:");    //dialog cu utilizatorul
	scanf("%f",&n2);   //introducem nota celui de-al doilea student

	m = media_(n1,n2);  //apelam functia pentru calcularea mediei notelor

	printf("\n%20s",s1);   //afisam numele primului student
	printf("\n%-20s",s2);    //afisam numele celui de-al doilea student
	printf("\nMedia notelor este: %.2f",m);  //afisam media notelor studentilor

	return 0;
}

float media_(float a, float b)  //functia de calculare a mediei
{
	return (a + b)*1.0/ 2.0;  //functia returneaza media aritmetica a 2 numere
}
