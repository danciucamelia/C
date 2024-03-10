/*Danciu Camelia-Maria, anul 1, grupa 2115, laboratorul 10,pb 5
Definiti un tablou de pointeri catre siruri de caractere. Fiecare locatie a tabloului 
contine adrese catre unul din urmatoarele siruri de caractere:
- "valoare prea mica"
- "valoare prea mare"
- "valoare corecta"
Aplicatia genereaza un numar aleator intre 1 si 100 si apoi citeste in mod repetat 
intrarea de la tastatura pana cand utilizatorul introduce valoarea corecta. Folositi
mesajele definite pentru a informa utilizatorul, la fiecare pas, despre relatia existenta 
intre numarul generat si ultima valoare citita.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>

int main()
{

    const char* po[] = { "valoare prea mica","valoare prea mare","valoare corecta" };
    int k = 0;
    int nr,n;
    nr = rand() % 100 + 1;
    do {
        printf("\nIntroduceti numarul:");
        scanf("%d", &n);
        if (n == nr) { k = 0; printf("%s", *(po+2)); }
        if (n > nr) { k = 1; printf("%s", *(po+1)); }
        if (n < nr) { k = -1; printf("%s", *po); }

    } while (k != 0);

    return 0;
  }
