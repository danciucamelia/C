//Danciu Camelia-Maria, anul 1, grupa 2115, laboratorul 5, problema3
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h> 

float ipotenuza(int a, int b);   //declaram functiile inainte de main,unde urmeaza sa fie utilizate 
float perimetru(int a, int b, float c);

int main()
{
	int c1, c2;  //declaram catetele triunghiului ca numere intregi
	float i, p;    //decalaram ipotenuza si perimetrul ca numere reale
	printf("\nIntroduceti valoarea primei catete:"); //dialog cu utilizatorul
	scanf("%d", &c1);  //introducem valoarea primei catete
	printf("\nIntroduceti valoarea celei de-a doua catete:"); //dialog cu utilizatorul
	scanf("%d", &c2);   //introducem valoarea celei de-a doua catete

	i = ipotenuza(c1, c2); // apelam functia pentru calcularea ipotenuzei
	p = perimetru(c1, c2, i);  //apelam functia pentru calcularea perimetrului

	printf("\nIpotenuza are valoarea:%.3f", i);  //afisam valoarea ipotenuzei
	printf("\nPerimetrul are valoarea:%.3f", p);  //afisam valoarea perimetrului
	return 0;
}

float ipotenuza(int a, int b)  //functia de calculare a ipotenuzei
{
	return sqrt(a * a + b * b);  //functia returneaza valoarea ipotenuzei,(folosinm Teorema lui Pitagora)
}
float perimetru(int a, int b, float c)  //functia de calculare a perimetrului
{
	return a + b + c;   //functia returneaza perimetrul (suma laturilor triunghiului)
}
