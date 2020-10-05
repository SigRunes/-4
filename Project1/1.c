#include<stdio.h>
#include<math.h>

int main() {
	int x, y, s;
	scanf("%d", &y);
	for (x = 0; x < 5; x++) {
		if (y > 10 || y == 0) {
			s = x + y;
		}
		else {
			s = pow(x,2) + pow(y,2);
		}
		printf("%d\n", s);
	}
	return 0;

}