//Danciu Camelia-Maria, anul 1, grupa 2115, laboratorul 8,pb4
//definirea unei parole/citirea repetata pana la introducerea corecta a parolei
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cstring>
#define dim 20
int main()
{
        char s[dim], parola[] = "programare";
        int nr = 0, k = 0;
        do {
                printf("\nIntroduceti parola:");
                scanf("%s", &s); nr++;
                if (strcmp(s, parola) == 0) k = 0;
                else k = 1;

        } while (k != 0);

        printf("\nNumarul de incercari este:%d", nr);

        return 0;
}
