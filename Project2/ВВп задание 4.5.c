#include<stdio.h>;
#include<math.h>;

int main() {
	float a, b, s, p, r, c;
	scanf("%f%f", &a, &b);
	a = fabsf(a);
	b = fabsf(b);
	c = a / b;
	r = a - b;
	s = a + b;
	p = a * b;
	printf("%.2f,%.2f,%.2f,%.2f\n", s, r, p, c);
	return 0;
}