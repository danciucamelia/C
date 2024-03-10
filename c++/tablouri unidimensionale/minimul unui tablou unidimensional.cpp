/*Determinaţi minimul dintr-un tablou unidimensional de 10 numere flotante (introduse de la tastatură/iniţializate) 
folosind funcţii cu un număr variabil de parametri. Se vor considera primele 7 valori din şir, apoi următoarele 3, 
după care se afişează minimul din cele 10 folosind valorile determinate anterior.*/
#include <stdarg.h>
#include <iostream>

using namespace std;

int minim(int NrArgumente, ...)
{
    va_list argument; 			//declaram variabila de tip va_list
    int i,nr[10];
    va_start(argument, NrArgumente); 	//apelam va_start() si o initializam
    //for (i = 0; i < NrArgumente; i++)
       // rezultat += va_arg(argument, int); //valoarea argumentului + inaintare
    for (int i = 0; i < 10; i++)
    {
        cout << "nr[i]="; cin >> nr[i];
    }
    int aux;
    aux = va_arg(argument,int);
    for (i = 1; i < NrArgumente; i++)
    {
       // aux = va_arg(argument,int);
        if (va_arg(argument, int) < aux) aux = va_arg(argument, int);
    }
    va_end(argument); 		      
    return aux;
}

int main(void)
{
    cout <<minim(5, 11, 2, 3, 14, 5) << '\n';  	
   

    return 0;
}

