#include<stdio.h>
#include<math.h>
int main() {
	int A, R1, R2;
	printf("Input A: ");
	scanf("%d", &A);
	R1 = pow(A, 2);
	R2 = R1 * R1 * R1 * pow(A, 3) * pow(A, 3) * pow(A, 3);
	printf("A^15= %d", R2);
	return 0;
}