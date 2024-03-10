/*Danciu Camelia-Maria,anul1, grupa 2115, lab 3, pb 11
Citiți de la intrarea standard un tablou unidimensional de maxim 20 de valori întregi.
Folosind mecanismul de căutare binară, determinați dacă o nouă valoare, a, introdusă de la 
tastatură există în șir. Dacă da, determinați toți factorii primi ai acestei valori pe care îi veți afișa pe ecran.*/
#include<iostream>
using namespace std;
void citire(int x[], int n);
void factori(int a);
void cautare(int x[], int n);
int main()
{
	int x[20], n,a;
	citire(x, n);
    cautare(x, a);
    factori(a);
	return 0;
}
void citire(int x[],int n)
{
	cout << "\nIntroduceti dimensiunea tabloului unidimensional:";
	cin >> n;
	while (n < 0 || n>20)
	{
		cout << "\nIntroduceti din nou dimensiunea tabloului unidimensional:";
		cin >> n;
	}
}
void factori(int a)
{
    int d = 2,p;    
    
    while (a > 1)
    {
        p = 0;
        while (a % d == 0)
        {
            ++p;
            a /= d;
        }
        if (p)
            cout << d << " " << p << endl;
        ++d;
        
        if (a > 1 && d * d > a) {
            d = a; 
        }
    }
}
void cautare(int x[], int n)
{
	int a,s=0;
	cout << "\nValoarea a este:"; cin >> a;
	for(int i=0;i<n;i++)
	{
        if (x[i] == a) {
            cout << "\nValoarea a se afla in sir."; s++;

        }
	}
    if (s) factori(a);
}
