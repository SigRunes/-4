#include<stdio.h>

int main() {
	int X, Y;
	printf("Input X and Y: ");
	scanf("%d%d", &X, &Y);

	if (X > 0 && Y > 0)
		printf("It is 1 quarter");
	if (X < 0 && Y>0)
		printf("It is 2 quarter");
	if (X < 0 && Y < 0)
		printf("It is 3 quarter");
	if (X > 0 && Y < 0)
		printf("It is 4 quarter");
	
	return 0;
}