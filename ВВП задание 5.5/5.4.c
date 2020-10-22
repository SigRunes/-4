#include <stdio.h>
#include <math.h>
int main() {
	float x1, x2, y1, y2, a, b, P, S;
	printf("Input x1 and y1:");
	scanf("%f%f", &x1, &y1);
	printf("Input x2 and y2:");
	scanf("%f%f", &x2, &y2);
	a = abs(x2 - x1);
	b = abs(y2 - y1);
	P = 2 * (a + b);
	S = a * b;
	printf("Sq: %f,P: %f\n", S, P);
	return 0;
}