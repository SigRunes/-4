#include<stdio.h>

int main() {
	int K, N, R;
	printf("Input K: ");
	scanf("%d", &K);
	printf("Input N: ");
	scanf("%d", &N);
	R = (K + N - 2) % 7 + 1;
	printf("Answer is: %d\n", R);
}