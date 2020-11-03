#include<stdio.h>;

int main() {
	float A, X, Y, kg;
	printf("Input A(price): ");
	scanf("%f", &A);
	printf("Input X(kg): ");
	scanf("%f", &X);
	printf("Input Y(kg): ");
	scanf("%f", &Y);
	kg = A / X;;
	printf("1 kg= %.2f Rub and %.f kg= %.2f Rub", kg, Y, A / X * Y);
	return 0;
}