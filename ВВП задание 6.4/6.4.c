#include<stdio.h>
#include<math.h>

int main() {
	int y, x;
	printf("Input X ");
	scanf("%d", &x);
	y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	printf("y= %d\n", y);
	return 0;
}
