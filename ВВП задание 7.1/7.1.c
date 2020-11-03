#include<stdio.h>

int main() {
	float A, Rad, Pi;
	Pi = 3.14;
	printf("Input A(0<=A<360): ");
	scanf("%f", &A);
	Rad = Pi * A / 180;
	printf("Rad= %.2f\n", Rad);
	return 0;
}