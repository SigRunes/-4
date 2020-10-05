#include<stdio.h>

int main() {
	int a, b, S, P;
	scanf("%d%d", &a, &b);
	S = a * b;
	P = 2 * (a + b);
	printf("%d,%d\n", S, P);
	return 0;
}