#include<stdio.h>;
#include<math.h>;

int main6() {
	float a, b, s, p, r, c;
	scanf("%f%f\n", &a, &b);
	a = fabsf(a);
	b = fabsf(b);
	c = a / b;
	r = a - b;
	s = a + b;
	p = a * b;
	printf("������� �����: %.2f,�������� �����: %.2f,����� �����: %.2f,������������ �����:%.2f\n", c, r, s, p);
	return 0;
}