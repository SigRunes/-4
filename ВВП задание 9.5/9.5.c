#include<stdio.h>

int main() {
	int N;
	printf("Input number of year: ");
	scanf("%d", &N);
	N = (N - 1) / 100 + 1;
	printf("Number of century: %d\n", N);
	return 0;
}