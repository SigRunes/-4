#include<stdio.h>

int main() {
	int A, B;

	printf("Input A: ");
	scanf("%d", &A);
	printf("Input B: ");
	scanf("%d", &B);

	if (A != B) {
		if (A > B) {
			B = A;
		}
		else
			A = B;
	}
	else {
		A = 0;
		B = 0;
	}
	printf("A: %d and B: %d\n", A, B);
	return 0;
}