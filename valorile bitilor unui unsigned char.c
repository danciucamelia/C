//Danciu Camelia-Maria, anul 1 ,grupa 2115, laboratorul 6, pb 3/afisam valorile bitilor unei variabile de tip unsigned char

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
        unsigned char a;
        int num, k;
        printf("\nIntroduceti caracterul:");
        scanf("%c", &a);
        num = (int)a;
        printf("%d\n", num);

        do {

                for (int i = 0; i < 8; i++) //afisam pe 8 biti(deoarece avem unsigned char care e pe 8 biti)
                {
                        if (num % 2 == 0) k = 0;
                        else k = 1;
                        printf("Bitul de pe pozitia %d este %d\n", i, k);
                        num = num / 2;

                }
        } while (num);

        return 0;
}
