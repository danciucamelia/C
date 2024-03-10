/*Danciu Camelia-Maria,anul 1, grupa 2115, lab 1, pb 1
Definiţi funcţii macro MAXi (i=2,3)care determină şi afişează maximul dintre 2 si alta, dintre 3 numere
introduse de la tastatură. Folositi variante diferite (operator conditional, instructiuni if, etc.)*/
#define MAX2(a,b) ((a)>(b)?(a):(b))
//((x)>(y)>(z)?(x):(y):(z))
#define MAX3(x,y,z) {if(x<y && y<z) z=z;\
else if(y<z && z<x) z=x;\
else if(z<x && x<y) z=y;\
} 
#include<iostream>
 using namespace std;
 int main()
 {
	 int a, b;
	 cout << "\nIntroduceti 2 numere:";
	 cout << "\na="; cin >> a;
	 cout << "\nb="; cin >> b;
	 cout << "\nMaximul dintre a si b este:" << MAX2(a,b);

	 int x, y, z;
	 cout << "\nIntroduceti alte 3 numere:";
	 cout << "\nx="; cin >> x;
	 cout << "\ny="; cin >> y;
	 cout << "\nz="; cin >> z;
	 MAX3(x, y, z)
	 cout << "Maximul dintre x,y si z este:"<<z;


	 return 0;
 }
