#include<math.h>
#include <stdio.h>

int main(){
	int A;
	printf("A:");
	scanf("%i", &A);
	A = abs(A);
	printf("%d\n", (((A / 100) > (A % 100 / 10)) & ((A % 100 / 10) > (A % 10))) | (((A / 100) < (A % 100 / 10)) & ((A % 100 / 10) < (A % 10))));
	return 0;
}