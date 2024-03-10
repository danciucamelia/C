//Danciu Camelia-Maria, anul1, grupa 2115, lab 2,pb 2
/*Calculati combinari de n luate cate k, n si k fiind preluate de la tastatura, k<n, utilizând o funcţie recursivă.
Verificati rezultatul folosind si metoda bazata pe factorial.*/
#include<iostream>
using namespace std;
int factorial(int n);
int combinari(int n, int k);
int combinari1(int n, int k);
int main()
{
	int n, k;
	do{cout << "\nIntroduceti numarul n:"; cin >> n;
	cout << "\nIntroduceti numarul k:"; cin >> k;
	} while (k > n);
	//cout << "\nn! este:"<<factorial(n);
	cout << "\nCombinarile calculate recursiv sunt:" << combinari(n, k);
	cout << "\nCombinarile calculate folosind factorialul:" << combinari1(n, k);

	return 0;
}

int factorial(int n)
{
	if (n == 0) return 1;
	else return n * factorial(n - 1);
}
int combinari(int n, int k)
{
	if (k == n || k == 0 || n == 0) return 1;
	else return (n /(n - k))*combinari(n - 1, k);

}
int combinari1(int n, int k)
{
	if (k == n || k == 0 || n == 0) return 1;
	else return factorial(n) / (factorial(k) * factorial(n - k));
}
