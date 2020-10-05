#include<stdio.h>;
#include<math.h>;

int main() {
	float a, b, c, s, r, p;
	scanf("%f%f", &a, &b);
	a = pow(a, 2);
	b = pow(b, 2);
	c = a / b;
	r = a - b;
	p = a * b;
	s = a + b;
	printf("%.2f,%.2f,%.2f,%.2f\n", c, r, p, s);
	return 0;
}