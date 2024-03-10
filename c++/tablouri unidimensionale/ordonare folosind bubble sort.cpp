/*Danciu Camelia-Maria, anul 1, grupa 2115, lab 4, pb 1
1. Implementaţi metoda bulelor (Bubble-Sort) care foloseşte un indicator flag şi optimizează ciclul interior. 
Se cere atât scrierea funcţiei, cât şi partea de program care face citirea şi afişarea şirului iniţial şi a celui ordonat.*/
#include<iostream>
using namespace std;
#define dim 30
void SortBubble(int tab[], int n);
void main(void) {
    int  n, tab[dim];
    cout << "Introduceti numarul de elemente: ";
    cin >> n;
    while (n < 0 || n>30)
    {
        cout << "Introduceti alt numar de elemente: ";
        cin >> n;
    }
    cout << "Introduceti elementele sirului: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "x[" << i << "]:"; cin >> tab[i];
    }
    cout << "Sirul initial este :" << endl;
    for (int i = 0; i < n; i++)
        cout << tab[i] << "\t";
    SortBubble(tab, n);
    cout << endl << "Sirul ordonat este:" << endl;
    for (int i = 0; i < n; i++)
        cout << tab[i] << "\t";


}
void SortBubble(int tab[], int n)
{
    int aux, ok;
    do {
        ok = 1;
        for (int i = 0; i < n - 1; i++) {
            if (tab[i] > tab[i + 1]) {
                aux = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = aux;
                ok = 0;
            }
        }
    } while (ok == 0);
}
