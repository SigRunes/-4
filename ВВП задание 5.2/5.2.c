#include <stdio.h>
#include <math.h>

int main()
{
    int A, B, C;
    printf("Input A,B and C: ");
    scanf("%i %i %i", &A, &B, &C);
    int AC = abs(C - A);
    int BC = abs(C - B);
    printf("AC = %i BC = %i\n", AC, BC);
    printf("AC + BC = %i", AC + BC);
    return 0;
}