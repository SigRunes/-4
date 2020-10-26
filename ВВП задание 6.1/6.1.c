#include<stdio.h>

int main() {
	int A, B, V;
	printf("Input A ");
	scanf("%d", &A);
	printf("Input B ");
	scanf("%d", &B);
	V = A;
	A = B;
	B = V;
	printf("A= %d, B= %d", A, B);
	return 0;
}