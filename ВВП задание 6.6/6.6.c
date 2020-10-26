#include<stdio.h>
#include<math.h>
int main() {
	int A, R;
	printf("Input A: ");
	scanf("%d", &A);
	R = pow(A, 4);
	R = R * pow(A, 2) * pow(A, 2);
	printf("A^8= %d", R);
	return 0;
}