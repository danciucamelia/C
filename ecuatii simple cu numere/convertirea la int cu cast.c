/*Danciu Camelia - Maria, anul 1, grupa 2115, laboratorul 6, pb 7
--efectuarea operatiilor de inmultire/adunare/scadere/inmultire
--convertirea la int cu ajutorul operatorului cast
--afisarea minimului dintre cele 2 numere*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
        float a, b;
        printf("\nIntroduceti valoarea lui a:");
        scanf("%f", &a);
        printf("\nIntroduceti valoarea lui b:");
        scanf("%f", &b);
        
        
        printf("\nSuma numerelor este:%.2f", a+b);
        printf("\nDiferenta numerelor este:%.2f", a-b);
        printf("\nProdusul numerelor este:%.2f", a*b);
        printf("\nRaportul dintre numere este:%.2f\n", a/b);
        

        float s = (int)(a+b);
    float p = (int)(a*b);
        float d = (int)(a-b);
        float i = (int)(a/b);

        printf("\nSuma numerelor este:%.2f", s);
        printf("\nDiferenta numerelor este:%.2f", d);
        printf("\nProdusul numerelor este:%.2f",p);
        printf("\nRaportul dintre numere este:%.2f\n", i);

        if (a < b) printf("\nValoarea minima dintre numere este:%.2f", a);
        else printf("\nValoarea minima dintre numere este:%.2f", b);

                
                return 0;
}
