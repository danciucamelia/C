//Danciu Camelia-Maria, anul 1, grupa 2115, laboratorul 5, problema 8
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int o_s, min_s, o_p, min_p,ora,minut;  //declaram orele si minutele plecarii/sosirii, numere intregi
	printf("Introduceti ora plecarii:");  //dialog cu utilizatorul
	scanf("%d", &o_p);   //introducem ora plecarii
	printf("Introduceti minutul plecarii:");//dialog cu utilizatorul
	scanf("%d", &min_p);   //introducem minutul plecarii
	printf("\nIntroduceti ora sosirii:"); //dialog cu utilizatorul
	scanf("%d", &o_s);   //introducem ora sosirii
	printf("Introduceti minutul sosirii:"); //dialog cu utilizatorul
	scanf("%d", &min_s);    //introducem minutul sosirii
	  
	printf("\nOra plecarii este: %d:%d, iar ora sosirii trenului este: %d:%d.", o_p, min_p, o_s, min_s); //afisam orele/minutele sosirii/plecarii
	
	if (min_p > min_s)  //daca minutul plecarii e mai mare decat minutul sosirii se executa:
	{
		o_s = o_s - 1; min_s = min_s + 60; printf("\nDurata calatoriei a fost de: %d ore si %d minute.", o_s - o_p, min_s - min_p);
	}
	else printf("\nDurata calatoriei a fost de: %d ore si %d minute.", o_s - o_p, min_s - min_p);  //altfel se executa

	return 0;
}
