#include <stdio.h>

main()
{
	double A, B;
	printf("Input A and B: "); scanf("%lf%lf", &A, &B);
	if (A != 0) printf("x = %.1lf\n", -B / A);
	getchar();
	return 0;
}