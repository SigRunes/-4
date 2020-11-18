#include<stdio.h>

int main() {
	int K, R;
	printf("Input K: ");
	scanf("%d", &K);
	R = K % 7;
	printf("%d day of year is %d weekday\n", K, R);
	return 0;
}