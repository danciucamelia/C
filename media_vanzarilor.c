#include <stdio.h>
#include <malloc.h>
void citire(float** x);
void calcul(float** x);
void eliberare(float**x);


int main() {
	int y, z;
	float** x;
	citire(x);
	calcul(x);
	eliberare(x);
}
void citire(float** x) {
	int y, z;
	x = (float**)malloc(5 * sizeof(float));
	for (y = 0; y < 5; y++) {
		x[y] = (float*)malloc(3 * sizeof(float));
		for (z = 0; z < 3; z++) {
			printf("In orasul %d, chioscul %d:", y, z);
			scanf("%f", &x[y][z]);
		}
	}
}
void calcul(float**x
) {
	float sum;
	int y, z;
	for (y = 0; y < 5; y++) {
		sum = 0;
		for (z = 0; z < 3; z++) { sum += x[y][z]; }
		printf("Pentru orasul %d media vanzarilor este:%f", y, sum / 3.0);
	}
}
void eliberare(float** x) {
	int y;
	for (y = 0; y < 5; y++)
		free(x[y]);
	free(x);
}
