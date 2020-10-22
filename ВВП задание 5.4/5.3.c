#include <stdio.h>
#include <math.h>

int main(){
    float A, B, C, AC, BC, pr;
    printf("Input A, B and C:");
    scanf("%f%f%f", &A, &B, &C);
    AC = abs(C - A);
    BC = abs(C - B);
    pr = AC * BC;
    printf("%.2f", pr);
    return 0;
}