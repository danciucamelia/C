#include <iostream>
using namespace std;

int combinari(int n, int k);
int factorial(int k);
int main()
{
	int n, k;
	cout << "Scrieti un numar natural pentru n:";
	cin >> n;
	cout << "Scrieti un numar natural pentru k:";
	cin >> k;
	if (k < n)
		cout << "Rezultatul combinarilor de n luate cate k este:" << combinari(n, k);
	else return 0;
	//cout << "\n" <<combinari(n,k)/factorial(k);
}
int factorial(int k)
{
	int p=1;
	for(int i=1; i<=k;i++)
	{
		p *= i;
	}
	return p;
}
int combinari(int n, int k)
{
	if ((n == 0 && k == 0) || n == k) return 1;
	else return (n /(n - k)) * combinari(n - 1, k);
}
