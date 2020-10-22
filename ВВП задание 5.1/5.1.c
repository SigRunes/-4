#include<stdio.h>
#include<math.h>

int main() {
	float x1, x2, y1, y2, D;
	scanf("%f%f%f%f", &x1, &y1, &x2, &y2);
	x1 = powf(x1, 2);
	x2 = powf(x2, 2);
	y1 = powf(y1, 2);
	y2 = powf(y2, 2);
	D = sqrtf((x1 - x2) + (y1 - y2));
	printf("%f", D);
	return 0;
}