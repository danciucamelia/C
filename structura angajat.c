#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 20

struct Data_nasterii {
	char luna[10];
	int ziua;
	int anul;
};
struct Angajat {
	char nume[20];
	char prenume[20];
	char ocupatia[20];
	char sectia[20];
	struct Data_nasterii data_n;
};


void citire(struct Angajat*);
void afisare(struct Angajat*);

//void citDatePers(struct Date_pers*); // pointer la structura
//void afisDatePers(struct Date_pers*);
int main(void) {
	struct Angajat dp[MAX]; // dp e un tabel de structuri
	int i, n;
	printf("\nNumar angajati : ");
	scanf("%d", &n);
	if (n <= 0) {
		printf("\n Numar invalid !");
		return 1;
	}
	printf("\n Introduceti datele personale :");
	for (i = 0; i < n; i++) {
		printf("\n Persoana %d:", i + 1);
		citire(&dp[i]);
	}
	//printf("\ntest: dp[0].data_nast.ziua = %d\n", //dp[0].data_nast.ziua);// test
	printf("\n\n Persoane introduse: %d\n", n);
	for (i = 0; i < n; i++) {
		printf("\t");
		afisare(&dp[i]);
	}
	return 0;
}
void citDatePers(struct Angajat* p) // la apel p <-- &dp[i]
{
	printf("\nNumele: ");
	scanf("%s", p->nume);
	printf("\nPrenumele: ");
	scanf("%s", p->prenume);
	scanf_s("%s", (p.ocupatia));
	printf("\nSectia:");
	scanf_s("%s", (p.sectia));
	printf("\nIntroduceti data nasterii:");
	printf("\n\tziua:");
	scanf_s("%d", ((p.data_n).ziua));
	printf("\n\tluna:");
	scanf_s("%s", ((p.data_n).luna));
	printf("\n\tanul:");
	scanf_s("%d", ((p.data_n).anul));
}
void afisDatePers(struct Angajat* p)
{
	printf("\n Numele: %s", p->nume);
	printf("\n Prenumele: %s", p->prenume);
	printf("\nOcupatia: %s", p.ocupatia);
	printf("\nSectia: %s", p.sectia);

	printf("\nData nasterii:");
	printf("\n\tziua: %d", (p.data_n).ziua);
	printf("\n\tluna: %d", (p.data_n).luna);
	printf("\n\tanul: %d", (p.data_n).anul);
