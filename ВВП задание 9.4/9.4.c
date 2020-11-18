#include<stdio.h>
#include<math.h>

int main() {
	int A, B, C, S, S1, t;
	printf("Input A: ");
	scanf("%d", &A);
	printf("Input B: ");
	scanf("%d", &B);
	printf("Input C: ");
	scanf("%d", &C);
	t = (A / C) * (B / C);
	S1 = t * sqrt(C);
	S = A * B - S1;
	printf("Number of squares: %d; Square: %d", t, S);
	return 0;
}