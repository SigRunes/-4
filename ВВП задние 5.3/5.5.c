#include <stdio.h>
#include <math.h>
int main() {
	float x1, x2, x3, y1, y2, y3, a, b, c, p, P, S;
	printf("Input x1 and y1: ");
	scanf("%f%f", &x1, &y1);
	printf("Input x2 and y2: ");
	scanf("%f%f", &x2, &y2);
	printf("Input x3 and y3: ");
	scanf("%f%f", &x3, &y3);
	a = sqrtf(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	b = sqrtf(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	c = sqrtf(pow(x1 - x3, 2) + pow(y1 - y3, 2));
	P = a + b + c;
	p = (a + b + c) / 2;
	S = sqrtf(p * (p - a) * (p - b) * (p - c));
	printf("P= %.2f,Sq= %.2f\n", P, S);
	return 0;
}