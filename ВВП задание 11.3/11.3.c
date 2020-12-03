#include<stdio.h>
#include<math.h>

int main() {
	int A, B, C, AB, AC;
	printf("Input A,B,C: ");
	scanf("%d%d%d", &A, &B, &C);

	AB = abs(A - B);
	AC = abs(A - C);

	if (AB < AC)
		printf("B is nearer to A then C= %d\n", AB);
	if (AC < AB)
		printf("C is nearer to A then B= %d\n", AC);
	if (AB = AC)
		printf("B and C are equidistant from A");
	return 0;
}