#include<stdio.h>

int main() {
	float A, B, Pi;
	Pi = 3.14;
	printf("Input A(0<=A<2*Pi): ");
	scanf("%f", &A);
	B = 180/Pi*A;
	printf("B= %.2f\n", B);
	return 0;
}