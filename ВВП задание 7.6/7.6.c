#include<stdio.h>

int main() {
	float A1, B1, C1, A2, B2, C2, D, X, Y;
	printf("Input A1 and B1 and C1: ");
	scanf("%f%f%f", &A1, &B1, &C1);
	printf("Input A2 and B2 and C2: ");
	scanf("%f%f%f", &A2, &B2, &C2);
	D = A1 * B2 - A2 * B1;
	X = (C1 * B2 - C2 * B1) / D;
	Y = (A1 * C2 - A2 * C1) / D;
	printf("X= %.2f, Y= %.2f", X, Y);
	return 0;
}