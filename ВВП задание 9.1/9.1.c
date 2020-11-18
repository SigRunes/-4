#include<stdio.h>

int main() {
	int N, sec;
	printf("Input N(sec): ");
	scanf("%d", &N);
	sec = N % 60;
	printf("sec= %d\n", sec);
	return 0;
}