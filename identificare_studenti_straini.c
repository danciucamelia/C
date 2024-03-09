/*Sa se scrie un program C/C++, care folosind o structura numita Student, avand campurile {nume, prenume, tara de origine, grupa, 
anul nasterii}, sa determine numarul de studenti straini din grupa (grupa de MAX studenti) si sa afiseze toate datele acestora.
Datele pentru studentii din grupa se citesc de la intrarea standard, pana la intalnirea numelui AAA.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 20

struct Student {
	char nume[16];
	char prenume[20];
	int grupa;
	char tara_origine[20];
	int anul_nasterii;
};
void citire(struct Student*);
void afisare(struct Student*);

int main(void) {
	struct Student dp[MAX]; 
	int i, n;
	printf("\nNumar studenti: ");
	scanf("%d", &n);
	if (n <= 0 || n>MAX) {
		printf("\nDate introduse gresit!");
		return 1;
	}
	printf("\n Introduceti datele personale :");

		for (i = 0; i < n; i++) {
			printf("\nStudentul %d:", i + 1);
			citire(&dp[i]);

		}
	
	
	for (i = 0; i < n; i++) {
		printf("\t");
		afisare(&dp[i]);
	}
	return 0;
}
void citire(struct Student* p) 
{
	
	if (strcmp(p->nume,"AAA") != 0)
	{
		printf("\nNumele: ");
		scanf("%s", p->nume);
		printf("\nPrenumele: ");
		scanf("%s", p->prenume);
		printf("\nGrupa: ");
		scanf("%d", &p->grupa);
		printf("\n\tTara de origine: ");
		scanf("%s", p->tara_origine);
		printf("\n\tAnul nasterii: ");
		scanf("%d", &p->anul_nasterii);
	}
	
	else { printf("\nDate introduse gresit!"); exit(1); }



}
	void afisare(struct Student* p)
	{
		int k = 0;
		if (strcmp(p->tara_origine, "Romania") != 0)
		{
			k++;
				printf("\nExista studenti straini!");
			printf("\n\nStudentii straini sunt: \n");
			{
				printf("\n Numele: %s", p->nume);
				printf("\n Prenumele: %s", p->prenume);
				printf("\n Grupa: %d", p->grupa);

				printf("\n\t Tara de origine: %s", p->tara_origine);
				printf("\n\t Anul nasterii: %d", p->anul_nasterii); 
				//k++;
			}
		
		}
		else if(k==0) printf("\nExista studenti romani!");
			
		
	}
