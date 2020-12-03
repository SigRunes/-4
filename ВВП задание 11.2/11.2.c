#include<stdio.h>

int main() {
	int A, B, C, r, p, h;

	printf("Input A: ");
	scanf("%d", &A);
	printf("Input B: ");
	scanf("%d", &B);
	printf("Input C: ");
	scanf("%d", &C);

	if (B > A && C > A) {
		printf("%d\n", (B + C));
	}
	else if (A > B && C > B) {
		printf("%d\n", (A + C));
	}
	else printf("%d\n", (A + B));
	return 0;
}