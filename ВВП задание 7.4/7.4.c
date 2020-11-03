#include<stdio.h>
#include<math.h>

int main() {
	int V1, V2, S, T, P;
	printf("Input V1 km/h: ");
	scanf("%d", &V1);
	printf("Input V2 km/h: ");
	scanf("%d", &V2);
	printf("Input S km: ");
	scanf("%d", &S);
	printf("Input T h: ");
	scanf("%d", &T);
	P = abs(S - ((V1 + V2) * T));
	printf("distance= %d", P);
	return 0;
}