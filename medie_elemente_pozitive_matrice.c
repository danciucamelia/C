#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define dim 7

float citire(float a[dim][dim], int c, int b);
float afisare(float a[dim][dim], int c, int b);
float media(float a[dim][dim], int c, int b);

int main()
{
	float x[dim][dim],med;
	int m, n;
	printf("\nIntroduceti m<=7:");
	scanf("%d", &m);
	printf("\nIntroduceti n<=7:");
	scanf("%d", &n);

	citire(x, m, n);
	afisare(x, m, n);
	med = media(x, m, n);
	printf("\nMedia elementelor pozitive este:%f",med);
	return 0;
}
float citire(float a[dim][dim], int c, int b)
{
	printf("\nIntroduceti elementele matricei:");
	for (int i = 0; i < c; i++)
		for (int j = 0; j < b; j++)
		{
			printf("\nx[%d][%d]:", i, j);
			scanf("%f", &a[i][j]);
	
		}
	return 0;

}
float afisare(float a[dim][dim], int c, int b)
{
	printf("\nMatricea este:\n");
	for (int i = 0; i < c; i++)
	{for (int j = 0; j < b; j++)
		
			printf("%f\t",a[i][j]);
	printf("\n");
	} 
	return 0;

}
float media(float a[dim][dim], int c, int b)
{
	float s = 0,k=0;
	for (int i = 0; i < c; i++)
	{for (int j = 0; j < b; j++)
		
			if ((i > j) && (a[i][j] > 0)) { s = s + a[i][j]; k++; }

		}
	return s*1.0/ k*1.0;
}
