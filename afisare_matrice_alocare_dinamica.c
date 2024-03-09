
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{
	int m, n, i, j;
	int **a;

	printf("\nIntroduceti numarul de linii:");
	scanf("%d",&m);
	if (a = new int* [m])
	{
		printf("\nIntroduceti numarul de coloane:");
		scanf("%d", &n);

		for (i = 0; i < m; i++)
		{
			a[i] = new int[n];
		}
		//if (a[i] == 0) 

		printf("\nIntroduceti elementele matricei:");

		for (i = 0; i < m; i++)
			for (j = 0; j < n; j++)
			{
				printf("\nA[%d][%d]=", i, j);
				scanf("%d", &a[i][j]);

			}

		printf("\nMatricea introdusa este:\n");
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < n; j++)
				printf("%d\t", a[i][j]);
			printf("\n");

		}
	}
	else { printf("\nAlocare nereusita!"); return 1; }

	


	return 0;
}
