#include<stdio.h>

int main() {
	int A, B, C, V, W;
	printf("Input A ");
	scanf("%d", &A);
	printf("Input B ");
	scanf("%d", &B);
	printf("Input C ");
	scanf("%d",&C);
	V = B;
	W = C;
	B = A;
	C = V;
	A = W;
	printf("A= %d, B= %d, C= %d", A, B, C);
	return 0;
}