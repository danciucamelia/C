
/*Danciu Camelia-Maria, anul1,grupa 2115, lab 1, pb2
Definiţi o funcţie inline min() care determină şi afişează minimul dintre 2 si alta dintre 3 numere întregi
introduse de la tastatură. Considerati supraincarcarea functiilor.*/
#include<iostream>
using namespace std;
inline int min(int a, int b);
inline int min(int& a, int& b, int d);

inline int min3(int a, int b, int c);
inline int min3(int& a, int& b, int& c, int d);
int main()
{
    int a, b, c;
    cout << "\nIntroduceti numerele a,b si c:";
    cout << "\na="; cin >> a;
    cout << "\nb="; cin >> b;
    cout << "\nc="; cin >> c;

    cout << "\nMinimul primelor doua numere prin valoare este:" << min(a, b);
    cout << "\nMinimul primelor doua numere prin referinta este:" << min(a, b, 1) << endl;

    cout << "\nMinimul celor 3 numere prin valoare este:" << min3(a, b, c);
    cout << "\nMinimul celor 3 numere prin referinta este:" << min3(a, b, c, 1);

    return 0;
}
int min(int a, int b)
{
    return(a < b ? a : b);
}
int min(int& a, int& b, int c)
{
    return(a < b ? a : b);
}
int min3(int a, int b, int c)
{
    return(min(a, b) < c ? min(a, b) : c);
}
int min3(int& a, int& b, int& c, int d)
{
    return(min(a, b, 1) < c ? min(a, b) : c);
}
